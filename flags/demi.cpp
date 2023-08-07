#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

static GraphicsCommand demisexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(110,  0,112)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(210,210,210)),
	GraphicsCommand(Triangle,Top(0),Point(243,h_2_1),Bottom(0),RGB(0,0,0)),
	GraphicsCommand(EndCommandList)
};

Flag demisexual_flag = Flag(
	"demisexual",
	"The Demisexual pride flag",
	NULL,
	NULL,
	demisexual_pride_flag_commands,
	RGB(0,0,0),
	4
);

static GraphicsCommand demiromantic_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB( 61,165, 66)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(210,210,210)),
	GraphicsCommand(Triangle,Top(0),Point(243,h_2_1),Bottom(0),RGB(0,0,0)),
	GraphicsCommand(EndCommandList)
};

Flag demiromantic_flag = Flag(
	"demiromantic",
	"The Demiromantic pride flag",
	NULL,
	NULL,
	demiromantic_pride_flag_commands,
	RGB(0,0,0),
	4
);

static GraphicsCommand demigirl_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,174,201)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,174,201)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

Flag demigirl_flag = Flag(
	"demigirl",
	"The Demigirl/Demiwoman Pride flag",
	"Designed by the tumblr user Transrants at an unknown date",
	"demiwoman",
	demigirl_flag_commands
);

static GraphicsCommand demiboy_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(154,217,235)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(154,217,235)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

Flag demiboy_flag = Flag(
	"demiboy",
	"The Demiboy/Demiman Pride flag",
	"Designed by the tumblr user Transrants at an unknown date",
	"demiman|demiguy",
	demiboy_flag_commands
);