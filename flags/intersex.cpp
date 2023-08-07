#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand intersex_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(255,216,  0)),
	GraphicsCommand(Ellipse,Point(320,240),122,122,RGB(121, 2,170)),
	GraphicsCommand(Ellipse,Point(320,240),87,87,RGB(255,216,  0)),
	GraphicsCommand(EndCommandList)
};

Flag intersex_flag = Flag(
	"intersex",
	"The Intersex Pride Flag",
	NULL,
	NULL,
	intersex_pride_flag_commands,
	RGB(0,0,0),
	4
);
