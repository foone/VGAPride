#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"



static GraphicsCommand progressive_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	// Black chevron
	GraphicsCommand(Quad,Point(51,0),Point(102,0),Point(304,240),Point(254,240),RGB(  0,  0,  0)),
	GraphicsCommand(Quad,Point(254,240),Point(304,240),Point(102,480),Point(51,480),RGB(  0,  0,  0)),
	// Brown chevron
	GraphicsCommand(Quad,Point(0,0),Point(51,0),Point(254,240),Point(204,240),RGB( 97, 57, 21)),
	GraphicsCommand(Quad,Point(204,240),Point(254,240),Point(51,480),Point(0,480),RGB( 97, 57, 21)),
	// Light-blue chevron
	GraphicsCommand(Quad,Point(0,60),Point(0,0),Point(204,240),Point(152,240),RGB(116,215,238)),
	GraphicsCommand(Quad,Point(204,240),Point(152,240),Point(0,420),Point(0,480),RGB(116,215,238)),
	// Pink chevron
	GraphicsCommand(Quad,Point(0,122),Point(0,60),Point(152,240),Point(102,240),RGB(255,175,200)),
	GraphicsCommand(Quad,Point(152,240),Point(102,240),Point(0,358),Point(0,418),RGB(255,175,200)),
	// White triangle
	GraphicsCommand(Triangle,Point(0,122),Point(102,240),Point(0,358),RGB(255,255,255)),

	GraphicsCommand(EndCommandList)
};

Flag progressive_flag = Flag(
	"progress",
	"The Progress Pride Flag",
	"Designed in 2018 by Daniel Quasar",
	"progressive|progress2018|progressive2018",
	progressive_pride_flag_commands
);


static GraphicsCommand progressive_intersex_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(216,0,19)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(236,117,20)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(235,227,29)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(103,174,32)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(34,67,147)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(89,17,109)),
	// Black chevron
	GraphicsCommand(Quad,Point(153,  0),Point(199,  0),Point(421,240),Point(374,240),RGB( 22, 22,  21)),
	GraphicsCommand(Quad,Point(374,240),Point(421,240),Point(199,480),Point(152,480),RGB( 22, 22,  21)),
	// Brown chevron
	GraphicsCommand(Quad,Point(107,  0),Point(153,  0),Point(374,240),Point(328,240),RGB(129, 67, 18)),
	GraphicsCommand(Quad,Point(328,240),Point(374,240),Point(153,480),Point(107,480),RGB(129, 67, 18)),
	// Light-blue chevron
	GraphicsCommand(Quad,Point( 60, 0),Point(107,  0),Point(328,240),Point(282,240),RGB(107,193,223)),
	GraphicsCommand(Quad,Point(328,240),Point(282,240),Point(60,480),Point(107,480),RGB(107,193,223)),
	// Pink chevron
	GraphicsCommand(Quad,Point( 15,0),Point(60,0),Point(282,240),Point(236,240),RGB(239,155,188)),
	GraphicsCommand(Quad,Point(282,240),Point(236,240),Point(15,480),Point(60,480),RGB(239,155,188)),
	// White chevron
	GraphicsCommand(Quad,Point(-31,0),Point(15,0),Point(236,240),Point(190,240),RGB(255,255,255)),
	GraphicsCommand(Quad,Point(-31,480),Point(15,480),Point(236,240),Point(190,240),RGB(255,255,255)),
	// Yellow triangle
	GraphicsCommand(Triangle,Point(0,35),Point(190,240),Point(0,447),RGB(252,210,21)),
	// Purple circle
	GraphicsCommand(Ellipse,Point(70,240),57,57,RGB(82, 32,120)),
	// Yellow circle inside purple circle
	GraphicsCommand(Ellipse,Point(70,240),45,45,RGB(252,210,21)),

	GraphicsCommand(EndCommandList)
};

Flag progressive_intersex_pride_flag = Flag(
	"inclusive-progress",
	"The Intersex-Inclusive (Progress) Pride Flag",
	"Created in 2021 by Valentino Vecchietti",
	"progress2022|progressive2022|progress-inclusive",
	progressive_intersex_pride_flag_commands,
	RGB(128,128,128),
	3,
	LAYOUT_CENTER
);