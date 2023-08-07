#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"



static GraphicsCommand aromantic_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB( 61,165, 66)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(167,211,121)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(169,169,169)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag aromantic_flag = Flag(
	"aromantic",
	"The Aromantic Pride Flag",
	"Created by Cameron Whimsey in 2014", // according to https://prideflags.info/flag/aromantic
	"aro",
	aromantic_pride_flag_commands
);


static GraphicsCommand asexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(163,163,163)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(128,  0,128)),
	GraphicsCommand(EndCommandList)
};

Flag asexual_flag = Flag(
	"asexual",
	"The Asexual Pride Flag",
	"Created by AVEN user 'standup' in 2010",
	"ace",
	asexual_pride_flag_commands
);


static GraphicsCommand aroace_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(226,140,  0)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(236,205,  0)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB( 98,174,220)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 32, 56, 86)),
	GraphicsCommand(EndCommandList)
};

Flag aroace_flag = Flag(
	"aroace",
	"The Aroace Pride Flag",
	"Designed by the tumblr user aroaceflags at an unknown date",
	"acearo|arosexual",
	aroace_flag_commands
);

static GraphicsCommand greysexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(110,  0,112)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(110,  0,112)),
	GraphicsCommand(EndCommandList)
};

Flag greysexual_flag = Flag(
	"greysexual",
	"The Greysexual Pride Flag",
	"Designed by Milith Rusignuolo in 2013",
	"graysexual|grey-asexual|gray-asexual|grey|gray",
	greysexual_flag_commands
);



static GraphicsCommand abrosexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(117,202,146)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(178,228,197)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(230,149,181)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(218, 68,108)),
	GraphicsCommand(EndCommandList)
};

Flag abrosexual_flag = Flag(
	"abrosexual",
	"The Abrosexual Pride Flag",
	"Designed by the tumblr user pride-flags-for-us at an unknown date",
	"abro",
	abrosexual_flag_commands
);

static GraphicsCommand aegosexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(163,163,163)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(128,  0,128)),
	GraphicsCommand(Quad,Point(0,h_4_0),Point(640,h_4_0),Point(560,h_4_1),Point(80,h_4_1),RGB(128,  0,128)),
	GraphicsCommand(Quad,Point(80,h_4_1),Point(560,h_4_1),Point(480,h_4_2),Point(160,h_4_2),RGB(255,255,255)),
	GraphicsCommand(Quad,Point(159,h_4_2),Point(481,h_4_2),Point(400,h_4_3),Point(240,h_4_3),RGB(163,163,163)), // Cheating slightly to prevent white touching white
	GraphicsCommand(Triangle,Point(240,h_4_3),Point(400,h_4_3),Point(320,h_4_4),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag aegosexual_flag = Flag(
	"aegosexual",
	"The Aegosexual Pride Flag, formerly called the Autochorissexual Pride Flag",
	"Created by tumblr user 'hunterinabrowncoat' in 2014",
	"aego|autochorissexual|autochoris",
	aegosexual_pride_flag_commands
);


static GraphicsCommand proculsexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(211,176, 55)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(210,210,210)),
	GraphicsCommand(EndCommandList)
};

Flag proculsexual_flag = Flag(
	"proculsexual",
	"The Proculsexual Pride Flag",
	"Designed by the tumblr user beyond-mogai-pride-flags at an unknown date",
	"procul",
	proculsexual_flag_commands,
	RGB(0,0,0),
	4
);

