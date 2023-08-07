#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand gay_men_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(  7,141,112)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB( 38,206,170)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(153,232,194)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(123,173,227)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB( 80, 73,203)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB( 62, 26,120)),
	GraphicsCommand(EndCommandList)
};

Flag gay_men_flag = Flag(
	"gay-men",
	"A pride flag for Gay men",
	"Created by Triton (@gayflagblog on tumblr) in 2019, based on a design by Hermy", //according to https://prideflags.info/flag/mlm
	"toothpaste",
	gay_men_flag_commands
);

static GraphicsCommand five_stripe_gay_men_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(  0,165,213)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB( 86,185,255)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB( 98,211,143)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(  2,163, 66)),
	GraphicsCommand(EndCommandList)
};

Flag five_stripe_gay_men_flag = Flag(
	"five-stripe-gay-men",
	"A 5-stripe modified version of the gayflagblog flag",
	NULL, // who designed this?
	"toothpaste5",
	five_stripe_gay_men_flag_commands,
	RGB(255,255,255),
	2
);


int polygon_bear0[]={82,239,59,215,52,200,53,195,61,191,77,194,89,202,96,216,92,231,88,238,-1,-1};
int polygon_bear1[]={70,181,60,172,50,156,45,140,49,131,62,129,77,138,90,157,88,170,81,181,-1,-1};
int polygon_bear2[]={74,112,59,101,49,87,45,70,49,60,60,60,75,67,87,81,89,95,84,108,-1,-1};
int polygon_bear3[]={116,80,104,68,92,63,81,57,81,46,91,36,105,32,120,36,133,46,134,60,130,72,124,79,-1,-1};
int polygon_bear4[]={177,106,163,98,153,84,147,64,148,53,154,47,170,50,183,57,191,67,196,81,193,96,188,104,-1,-1};
int polygon_bear5[]={112,241,105,236,102,221,103,189,106,167,105,159,89,139,85,130,85,115,98,93,112,85,128,84,155,103,168,109,185,110,206,99,214,98,227,108,231,122,224,133,209,149,198,160,163,185,142,217,125,238,118,243,-1,-1};

static GraphicsCommand bear_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB( 98, 56,  4)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(213, 99,  0)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(254,221, 99)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(254,230,184)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB( 85, 85, 85)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB( 0, 0, 0)),

	GraphicsCommand(Polygon,polygon_bear0,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear1,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear2,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear3,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear4,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear5,RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag bear_flag = Flag(
	"bear",
	"The Bear Pride Flag",
	NULL,
	NULL,
	bear_pride_flag_commands
);