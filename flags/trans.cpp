#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand trans_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB( 91,206,250)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(245,160,194)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(245,160,194)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 91,206,250)),
	GraphicsCommand(EndCommandList)
};

Flag trans_pride = Flag(
	"trans",
	"The Trans Pride Flag",
	"Designed by Monica Helms in 1999",
	"transgender|transsexual",
	trans_pride_flag_commands
);