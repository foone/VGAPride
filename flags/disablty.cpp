#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand disability_pride_flag_commands[]={
	GraphicsCommand(Triangle,Point(196,  0),Point(649,  0),Point(639,333),               RGB( 88, 88, 88)),
	GraphicsCommand(Quad,    Point(116,  0),Point(195,  0),Point(639,334),Point(639,394),RGB( 58,175,125)),
	GraphicsCommand(Quad,    Point( 33,  0),Point(115,  0),Point(639,395),Point(639,456),RGB(122,193,224)),
	GraphicsCommand(Quad,    Point(  0, 38),Point(  0,  0),Point( 32,  0),Point(639,457),RGB(233,233,233)),
	GraphicsCommand(Quad,    Point(  0, 38),Point(639,457),Point(639,479),Point(588,479),RGB(233,233,233)),
	GraphicsCommand(Quad,    Point(  0, 99),Point(  0, 39),Point(587,479),Point(507,479),RGB(238,223,119)),
	GraphicsCommand(Quad,    Point(  0,159),Point(  0, 98),Point(506,479),Point(430,479),RGB(207,114,128)),
	GraphicsCommand(Triangle,Point(  0,160),Point(429,479),Point(  0,479),               RGB( 88, 88, 88)),


	GraphicsCommand(EndCommandList)
};

Flag disability_pride_flag = Flag(
	"disability",
	"The Disability Pride Flag",
	"Created by Ann Magill (@capricorn-0mnikorn) in 2022",
	"disabled",
	disability_pride_flag_commands,
	RGB(255,255,255),
	3,
	LAYOUT_LEFT
);