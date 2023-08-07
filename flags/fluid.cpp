#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

static GraphicsCommand genderfluid_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,117,162)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(245,245,245)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(190, 24,214)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB( 44, 44, 44)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 51, 62,189)),
	GraphicsCommand(EndCommandList)
};

Flag genderfluid_flag = Flag(
	"genderfluid",
	"The Genderfluid Pride Flag",
	NULL, 
	NULL,
	genderfluid_flag_commands
);

static GraphicsCommand bigender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(196,121,162)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(237,165,205)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(154,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(109,130,209)),
	GraphicsCommand(EndCommandList)
};

Flag bigender_flag = Flag(
	"bigender",
	"The Bigender flag. Modified from the original to be easier to print",
	"Created by Natalie Phox (@NittrusFox) in 2009",
	NULL,
	bigender_flag_commands
);


static GraphicsCommand genderqueer_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(181,126,220)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 74,129, 35)),
	GraphicsCommand(EndCommandList)
};

Flag genderqueer_flag = Flag(
	"genderqueer",
	"The Genderqueer Pride Flag",
	"Designed by Marilyn Roxie in 2011",
	NULL,
	genderqueer_flag_commands
);

static GraphicsCommand androgyne_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Top(v_3_0),Bottom(v_3_1),RGB(254,  0,127)),
	GraphicsCommand(Rectangle,Top(v_3_1),Bottom(v_3_2),RGB(152, 50,255)),
	GraphicsCommand(Rectangle,Top(v_3_2),Bottom(v_3_3),RGB(  0,184,231)),
	GraphicsCommand(EndCommandList)
};

Flag androgyne_flag = Flag(
	"androgyne",
	"The Androgyne flag",
	"Designed by tumblr user saveferris in 2011",
	NULL,
	androgyne_pride_flag_commands
);

static GraphicsCommand genderflux_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(244,118,149)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(241,163,185)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(206,206,206)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(123,224,247)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB( 62,205,250)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(254,244,140)),
	GraphicsCommand(EndCommandList)
};

Flag genderflux_flag = Flag(
	"genderflux",
	"The Genderflux Pride Flag",
	"Designed by the tumblr user pride-flags-for-us at an unknown date",
	"flux",
	genderflux_flag_commands,
	RGB(0,0,0),
	4
);

static GraphicsCommand pangender_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(255,247,152)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(255,221,205)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,235,251)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,235,251)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(255,221,205)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(255,247,152)),
	GraphicsCommand(EndCommandList)
};

Flag pangender_pride_flag = Flag(
	"pangender",
	"The Pangender pride flag",
	"Created in 2015 by tumblr user pangendering (Cari Rez Lobo)", // https://pangendering.tumblr.com/post/109400686126/possible-pangender-pride-flags
	NULL,
	pangender_pride_flag_commands,
	RGB(0,0,0),
	4,
	LAYOUT_CENTER
);
