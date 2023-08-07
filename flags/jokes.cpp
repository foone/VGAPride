#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand ps_slash_2_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(147,140,243)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(  0,215,142)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(213,207,195)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(  0,215,142)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(147,140,243)),
	GraphicsCommand(EndCommandList)
};

Flag ps_slash_2_pride_flag = Flag(
	"ps/2",
	"The PS/2 Pride Flag",
	"Designed by Foone Turing in 2021",
	"ps2|ps-slash-2|ibm",
	ps_slash_2_pride_flag_commands
);

static GraphicsCommand littleender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(109,130,209)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(154,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(237,165,205)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(196,121,162)),
	GraphicsCommand(EndCommandList)
};

Flag littleender_flag = Flag(
	"littleender",
	"The Littleender Pride Flag: A joke on the Bigender Flag",
	"Created by Ellie Coyote (@LEDCoyote) in 2022",
	NULL,
	littleender_flag_commands
);

static GraphicsCommand trains_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(165,213, 67)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(  1,179, 93)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(254,238,  2)),
	GraphicsCommand(EndCommandList)
};

Flag trains_flag = Flag(
	"trains",
	"The Trains Pride flag: actually a painting called 'Train Landscape'",
	"Painted by Ellsworth Kelly in 1953",
	NULL,
	trains_pride_flag_commands,
	RGB(0,0,0),
	4
);
