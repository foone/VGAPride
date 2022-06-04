#ifndef GRAPHICS_H
#define GRAPHICS_H

enum SHAPE_TYPE { 
	Rectangle, Triangle, Quad, Ellipse, Polygon, PolygonOutline, 
	ThickPolygonOutline, Lines, ThickLines, Star, VGAPlane, Palette, None, EndCommandList 
};
enum STAR_SIZE {
	BigStar, TinyStar, MediumStar
};

class RGBCOLOR{
	public:
	unsigned char r,g,b;
	RGBCOLOR(){
		r=255;
		g=0;
		b=255;
	}
	RGBCOLOR(unsigned char r,unsigned char g,unsigned char b){
		this->r=r;
		this->g=g;
		this->b=b;
	}
};
int operator==(const RGBCOLOR &a, const RGBCOLOR &b);



class Point2D{
public:
	int x,y;
	Point2D(){
		x=y=0;
	}
	Point2D(int x, int y){
		this->x = x;
		this->y = y;
	}
};

class GraphicsCommand{
public:
	SHAPE_TYPE shape;
	Point2D points[4];
	RGBCOLOR color;
	int * point_list;
	int point_count;
	unsigned char * bitmap_plane;

	GraphicsCommand(){
		shape=None;
	}
	GraphicsCommand(SHAPE_TYPE shape){
		this->shape = shape;
	}
	GraphicsCommand(SHAPE_TYPE shape,Point2D *p1, Point2D *p2, RGBCOLOR color){
		this->shape=shape;
		this->points[0]=*p1;
		this->points[1]=*p2;
		this->color=color;
	}
	GraphicsCommand(SHAPE_TYPE shape,Point2D *p1, Point2D *p2, Point2D *p3, RGBCOLOR color){
		this->shape=shape;
		this->points[0]=*p1;
		this->points[1]=*p2;
		this->points[2]=*p3;
		this->color=color;
	}
	GraphicsCommand(SHAPE_TYPE shape,Point2D *p1, Point2D *p2, Point2D *p3, Point2D *p4, RGBCOLOR color){
		this->shape=shape;
		this->points[0]=*p1;
		this->points[1]=*p2;
		this->points[2]=*p3;
		this->points[3]=*p4;
		this->color=color;
	}
	// Variant specifically for ellipses, which smuggle xradius/yradius in the second point
	GraphicsCommand(SHAPE_TYPE shape,Point2D *p1, int x, int y, RGBCOLOR color){
		this->shape=shape;
		this->points[0]=*p1;
		this->points[1]=Point2D(x,y);
		this->color=color;
		this->point_list=NULL;
	}
	GraphicsCommand(SHAPE_TYPE shape,int far *pointlist, RGBCOLOR color);
	
	GraphicsCommand(SHAPE_TYPE shape,Point2D *p1, int size, RGBCOLOR color){
		this->shape=shape;
		this->points[0]=*p1;
		this->points[1]=Point2D(size,size);
		this->color=color;
	}
	GraphicsCommand(SHAPE_TYPE shape, unsigned char *bitmap_plane, int plane){
		this->shape=shape;
		this->bitmap_plane = bitmap_plane;
		this->points[0]=Point2D(plane,plane);
	}
	GraphicsCommand(SHAPE_TYPE shape, int palette_index, RGBCOLOR color){
		this->shape=shape;
		this->points[0]=Point2D(palette_index, palette_index);
		this->color = color;
	}

	void render();
private:
	void drawLines(int thickness);
};

#define MAX_COMMANDS 128


int operator==(const RGBCOLOR &a, const RGBCOLOR &b);

RGBCOLOR RGB(int r, int g, int b);

Point2D* Point(int x, int y);


Point2D *Left(int y);
Point2D *Right(int y);
Point2D *Top(int x);
Point2D *Bottom(int x);



#endif