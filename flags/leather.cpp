#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static int polygon_heart[]={207,200,147,196,112,191,81,177,55,145,52,115,59,91,79,74,99,70,120,75,121,53,129,28,146,14,161,7,183,11,197,22,210,40,219,56,224,80,-1,-1};
static GraphicsCommand leather_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_9_0),Right(h_9_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_1),Right(h_9_2),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_2),Right(h_9_3),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_3),Right(h_9_4),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_4),Right(h_9_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_9_5),Right(h_9_6),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_6),Right(h_9_7),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_7),Right(h_9_8),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_8),Right(h_9_9),RGB(  0,  0,  0)),

	GraphicsCommand(Polygon,polygon_heart,RGB(231,  0, 57)),
	GraphicsCommand(EndCommandList)
};

Flag leather_flag = Flag(
	"leather",
	"The Leather Pride Flag",
	NULL,
	NULL,
	leather_pride_flag_commands
);

