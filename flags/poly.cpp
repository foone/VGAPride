#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


int polygon_polyamory[]={289,281,299,234,305,205,294,203,283,209,277,218,274,229,270,228,268,219,273,203,281,194,292,189,306,187,357,189,362,190,371,184,375,184,376,187,376,197,370,206,351,205,347,207,341,254,340,262,343,267,354,267,358,265,361,267,362,274,357,284,349,290,340,289,335,282,332,274,332,252,336,216,337,207,331,206,315,205,310,220,304,256,303,282,305,283,304,292,294,288,-1,-1};
static GraphicsCommand polyamory_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(  0,  0,255)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(  0,  0,  0)),

	GraphicsCommand(Polygon,polygon_polyamory,RGB(255,255,  0)),
	GraphicsCommand(EndCommandList)
};

Flag polyamory_flag = Flag(
	"polyamory",
	"The Polyamory Flag",
	"Designed by Jim Evans in 1995",
	NULL,
	polyamory_flag_commands
);



int polygon_poly_heart[]={
	230,159,143,245,122,253,104,252,85,244,69,229,62,212,62,192,65,180,69,172,
	79,159,67,144,62,128,62,109,71,88,88,72,111,65,127,67,140,73,148,78,
	-1,-1};
static GraphicsCommand tricolor_polyamory_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(  0,159,227)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(228,  0, 80)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 52, 12, 70)),
	// white chevron
	GraphicsCommand(Quad,Point(0,0),Point(159,  0),Point(318,159),Point(0,479),RGB(255,255,255)),
	// yellow heart
	GraphicsCommand(Polygon,polygon_poly_heart,RGB(252,191,  0)),
	GraphicsCommand(EndCommandList)
};

Flag tricolor_polyamory_pride_flag = Flag(
	"tricolor-polyamory",
	"The tricolor polyamory pride flag",
	"Created in 2022 by Red Howell, selected by community on polyamproud.com",
	"tricolor-poly|polyamproud",
	tricolor_polyamory_pride_flag_commands
);
