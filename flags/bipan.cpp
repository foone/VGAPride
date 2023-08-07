#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand bisexual_pride_flag_commands[]={
	/* This flag isn't actually a 5-striper, it's a 3-striper, but the 
	proportions are equivalent to a 5-striper. */
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(214,  2,112)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(214,  2,112)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(115, 79,150)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(  0, 56,168)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(  0, 56,168)),
	GraphicsCommand(EndCommandList)
};

Flag bisexual_flag = Flag(
	"bisexual",
	"The Bisexual Pride Flag",
	"Designed by Michael Page in 1998",
	"bi",
	bisexual_pride_flag_commands
);


static GraphicsCommand pansexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(255, 33,140)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,216,  0)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 33,177,255)),
	GraphicsCommand(EndCommandList)
};

Flag pansexual_flag = Flag(
	"pansexual",
	"The Pansexual Pride Flag",
	"Designed in 2010 by an unknown person", // according to https://prideflags.info/flag/pansexual
	"pan",
	pansexual_pride_flag_commands
);


static GraphicsCommand polysexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(246, 28,185)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(  7,213,105)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 28,146,246)),
	GraphicsCommand(EndCommandList)
};

Flag polysexual_flag = Flag(
	"polysexual",
	"The Polysexual Pride Flag",
	NULL, // Who made this?
	NULL,
	polysexual_flag_commands
);




static GraphicsCommand omnisexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,155,205)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255, 83,190)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB( 38,  0, 70)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(102, 94,255)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(140,166,255)),
	GraphicsCommand(EndCommandList)
};

Flag omnisexual_flag = Flag(
	"omnisexual",
	"The Omnisexual Pride Flag",
	NULL,
	"omni",
	omnisexual_flag_commands
);

