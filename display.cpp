#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "flags.h"
#include "display.h"
#include <dos.h>
#include <alloc.h>

#define MAX_COLORS 16
int next_color;
PaletteMap pal_map[MAX_COLORS];

void clearPalette(){
	next_color=0;
	int i;
	for(i=0;i<MAX_COLORS;i++){
		pal_map[i].palette_entry=-1;
		pal_map[i].color=RGBCOLOR(255,0,255);
	}
	
}
int getPalette(RGBCOLOR rgb){
	for(int i=0;i<MAX_COLORS;i++){
		if(pal_map[i].color==rgb){
			return pal_map[i].palette_entry;
		}
	}
	if(next_color>=MAX_COLORS){
		closegraph();
		printf("Needed more colors than I have!\n");
		exit(4);
	}
	struct palettetype cpal;
	getpalette(&cpal);
	PaletteMap *pal=&pal_map[next_color];
	pal->palette_entry=next_color;
	pal->color=rgb;
	setrgbpalette(
		cpal.colors[pal->palette_entry],
		rgb.r/4,
		rgb.g/4,
		rgb.b/4
	);

	next_color++;
	return pal->palette_entry;
}
void displayFlag(Flag *flag){
	clearPalette();
	getPalette(RGBCOLOR(0,0,0));
	for(int i=0;i<MAX_COMMANDS;i++){
		if(flag->commands[i].shape==EndCommandList)break;
		flag->commands[i].render();
	}
	int ret = farheapcheck();
	if(ret==_HEAPCORRUPT){
		closegraph();
		printf("Heap corrupted!");
		exit(3);
	}
}

void GraphicsCommand::drawLines(int thickness){
	setlinestyle(SOLID_LINE, 0, thickness);
	for(int i=0;i<point_count-1;i++){
		int offset=2*i;
		line(
			point_list[offset+0],point_list[offset+1],
			point_list[offset+2],point_list[offset+3]
		);
	}
}

const int polygon_bigstar[]={-5,7,-3,1,-7,-2,-2,-2,0,-8,2,-2,7,-2,3,1,5,7,0,3,-1,-1,-1};
const int polygon_tinystar[]={-3,3,-2,0,-4,-1,-1,-1,0,-4,1,-1,3,-1,1,0,2,3,0,1,-1,-1,-1};
const int polygon_mediumstar[]={-4,6,-2,1,-6,-2,-2,-2,0,-7,1,-2,6,-2,3,1,4,6,0,2,-1,-1,-1};


static int polygon_points[32];

char far * volatile vga_ptr = (char far *)MK_FP(0xA000,0);

extern "C" unsigned int far lz4_decompress(const void far *inbuffer, void* far outbuffer);

#define PLANE_SIZE 38656 // 640*480/8 + 256

#define VGA_INDEX_REGISTER 0x3C4
#define VGA_DATA_REGISTER 0x3C5
#define VGA_MAP_MASK_INDEX 0x02


int GetVGAMapRegister(){
	outp(VGA_INDEX_REGISTER, VGA_MAP_MASK_INDEX);
	return inp(VGA_DATA_REGISTER);
}
void SetVGAMapRegister(int plane_mask){
	outp(VGA_INDEX_REGISTER, VGA_MAP_MASK_INDEX);
	outp(VGA_DATA_REGISTER, plane_mask);
}

void DecompressStringIntoPlane(const unsigned char far *compressed_plane, int plane){
	// faralloc instead of a local stack alloc because we want it to be segment-aligned, or nearly.
	
	unsigned char far *plane_buffer = (unsigned char far *) farmalloc(PLANE_SIZE);
	if(!plane_buffer){
		closegraph();
		printf("Couldn't allocate memory for decompression!\n");
		exit(5);
	}
	int old_vga_plane_settings = GetVGAMapRegister();

	SetVGAMapRegister(1 << plane);

	lz4_decompress((const void far *)compressed_plane, plane_buffer);
	memcpy(vga_ptr, plane_buffer, PLANE_SIZE);
	farfree(plane_buffer);

	SetVGAMapRegister(old_vga_plane_settings);
}

void GraphicsCommand::render(){
	int i;
	if(shape==None || shape==EndCommandList)return;
	if(shape != VGAPlane && shape!= Palette){
		int color = getPalette(this->color);
		setcolor(color);
		setfillstyle(SOLID_FILL, color);
		setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
	}
	switch(shape){
		case Rectangle:
			bar(points[0].x,points[0].y,points[1].x-1,points[1].y-1);
			break;
		case Triangle:
			for(i=0;i<3;i++){
				polygon_points[i*2+0]=points[i].x;
				polygon_points[i*2+1]=points[i].y;
			}
			fillpoly(3,polygon_points);
			break;
		case Quad:
			for(i=0;i<4;i++){
				polygon_points[i*2+0]=points[i].x;
				polygon_points[i*2+1]=points[i].y;
			}
			fillpoly(4,polygon_points);
			break;
		case Ellipse:
			fillellipse(points[0].x,points[0].y,points[1].x,points[1].y);
			break;
		case Polygon:
			fillpoly(point_count,point_list);
			break;
		case PolygonOutline:
			setlinestyle(SOLID_LINE, 0, NORM_WIDTH);
			drawpoly(point_count,point_list);
			break;
		case ThickPolygonOutline:
			setlinestyle(SOLID_LINE, 0, THICK_WIDTH);
			drawpoly(point_count,point_list);
			break;
		case Lines:
			drawLines(NORM_WIDTH);
			break;
		case ThickLines:
			drawLines(THICK_WIDTH);
			break;
		case Star:{
			int i;
			const int * polygon_star;
			switch(points[1].x){
				case BigStar:
					polygon_star=polygon_bigstar;
				break;
				case TinyStar:
					polygon_star=polygon_tinystar;
				break;
				case MediumStar:
					polygon_star=polygon_mediumstar;
				break;
				default:
					return;
			}
			for(i=0;;i+=2){
				if(polygon_star[i]==-1 && polygon_star[i+1]==-1)break;
				polygon_points[i]=polygon_star[i]+points[0].x;
				polygon_points[i+1]=polygon_star[i+1]+points[0].y;
			}
			fillpoly(i/2,polygon_points);
			break;
		}
		case Palette:{
			struct palettetype cpal;
			getpalette(&cpal);
			PaletteMap *pal=&pal_map[points[0].x];
			pal->palette_entry=points[0].x;
			pal->color=this->color;
			setrgbpalette(
				cpal.colors[pal->palette_entry],
				this->color.r/4,
				this->color.g/4,
				this->color.b/4
			);
			break;
		}
		case VGAPlane:{
			DecompressStringIntoPlane(this->bitmap_plane, this->points[0].x);
		break;
		}
	}

}