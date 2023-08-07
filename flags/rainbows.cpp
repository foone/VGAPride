#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

static GraphicsCommand rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(EndCommandList)
};

Flag rainbow_flag = Flag(
	"rainbow1979",
	"The Rainbow Pride flag (1979 edition)",
	"Designed by Gilbert Baker, changed in 1979 based on fabric availability",
	"gay|rainbow",
	rainbow_flag_commands
);


static GraphicsCommand seven_stripe_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(255,142,  0)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,255,  0)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(  0,142,  0)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(  0,192,192)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB( 64,  0,152)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(142,  0,142)),
	GraphicsCommand(EndCommandList)
};

Flag seven_stripe_rainbow_flag = Flag(
	"seven-stripe-rainbow",
	"The Rainbow Pride flag (7-stripe version)",
	"Designed by Gilbert Baker, hot pink dropped due to fabric availability",
	"gay7|rainbow7",
	seven_stripe_rainbow_flag_commands,
	RGB(255,255,255),
	3
);

static GraphicsCommand original_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_8_0),Right(h_8_1),RGB(255,105,180)),
	GraphicsCommand(Rectangle,Left(h_8_1),Right(h_8_2),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_8_2),Right(h_8_3),RGB(255,142,  0)),
	GraphicsCommand(Rectangle,Left(h_8_3),Right(h_8_4),RGB(255,255,  0)),
	GraphicsCommand(Rectangle,Left(h_8_4),Right(h_8_5),RGB(  0,142,  0)),
	GraphicsCommand(Rectangle,Left(h_8_5),Right(h_8_6),RGB(  0,192,192)),
	GraphicsCommand(Rectangle,Left(h_8_6),Right(h_8_7),RGB( 64,  0,152)),
	GraphicsCommand(Rectangle,Left(h_8_7),Right(h_8_8),RGB(142,  0,142)),
	GraphicsCommand(EndCommandList)
};

Flag original_rainbow_flag = Flag(
	"original-rainbow",
	"The Original Rainbow Pride flag",
	"Designed by Gilbert Baker in 1978",
	"original-gay",
	original_rainbow_flag_commands
);


static GraphicsCommand philadelphia_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_8_0),Right(h_8_1),RGB(  0,  0, 0)),
	GraphicsCommand(Rectangle,Left(h_8_1),Right(h_8_2),RGB(120, 79, 23)),
	GraphicsCommand(Rectangle,Left(h_8_2),Right(h_8_3),RGB(228,  3,  3)),
	GraphicsCommand(Rectangle,Left(h_8_3),Right(h_8_4),RGB(255,140,  0)),
	GraphicsCommand(Rectangle,Left(h_8_4),Right(h_8_5),RGB(225,237,  0)),
	GraphicsCommand(Rectangle,Left(h_8_5),Right(h_8_6),RGB(  0,128, 38)),
	GraphicsCommand(Rectangle,Left(h_8_6),Right(h_8_7),RGB(  0, 77,255)),
	GraphicsCommand(Rectangle,Left(h_8_7),Right(h_8_8),RGB(117,  7,135)),
	GraphicsCommand(EndCommandList)
};

Flag philadelphia_pride_flag = Flag(
	"philadelphia-pride-flag",
	"Adds black & brown to the rainbow flag for POC",
	"Designed in Philadelphia for the 2017 Pride Kick-Off",
	"philadelphia|philly",
	philadelphia_pride_flag_commands,
	RGB(255,255,255),
	3
);