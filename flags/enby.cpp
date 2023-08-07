#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand nonbinary_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(252,244, 52)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(252,252,252)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(156, 89,209)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB( 44, 44, 44)),
	GraphicsCommand(EndCommandList)
};

Flag nonbinary_flag = Flag(
	"non-binary",
	"The Non-binary Pride Flag",
	"Created by Kye Rowan in 2014",
	"nb|nonbinary",
	nonbinary_flag_commands
);



static GraphicsCommand agender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(185,185,185)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(184,244,131)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(185,185,185)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag agender_flag = Flag(
	"agender",
	"The Agender pride flag",
	"Designed by Salem Fontana in 2014",
	NULL,
	agender_flag_commands
);



static GraphicsCommand neutrois_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB( 61,165, 66)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag neutrois_flag = Flag(
	"neutrois",
	"The Neutrois Pride Flag",
	NULL,
	NULL,
	neutrois_flag_commands
);

