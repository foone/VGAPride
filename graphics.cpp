#include <stdlib.h>
#include "graphics.h"

int operator==(const RGBCOLOR &a, const RGBCOLOR &b){
		return a.r==b.r && a.g==b.g && a.b==b.b;
}

GraphicsCommand::GraphicsCommand(SHAPE_TYPE shape,int far *pointlist, RGBCOLOR color){
	this->point_list=pointlist;
	this->shape=shape;
	this->color=color;
	for(int i=0;;i+=2){
		if(pointlist[i]==-1 && pointlist[i+1]==-1){
			this->point_count=i/2;
			return;
		}
	}
}


RGBCOLOR RGB(int r, int g, int b){
	return RGBCOLOR(r,g,b);
}

Point2D Point(int x, int y){
	Point2D p=Point2D(x,y);
	return p;
}

Point2D Left(int y){
	return Point(0,y);
}
Point2D Right(int y){
	return Point(640,y);
}

Point2D Top(int x){
	return Point(x,0);
}
Point2D Bottom(int x){
	return Point(x,480);
}
