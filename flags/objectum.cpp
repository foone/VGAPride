#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


static GraphicsCommand objectum_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Top(v_5_0),Bottom(v_5_1),RGB(106,159,182)),
	GraphicsCommand(Rectangle,Top(v_5_1),Bottom(v_5_2),RGB(217,217,217)),
	GraphicsCommand(Rectangle,Top(v_5_2),Bottom(v_5_3),RGB(253,255,255)),
	GraphicsCommand(Rectangle,Top(v_5_3),Bottom(v_5_4),RGB(253,255,155)),
	GraphicsCommand(Rectangle,Top(v_5_4),Bottom(v_5_5),RGB(180,153,194)),
	// red circle
	GraphicsCommand(Ellipse,Point(320,240),136,136,RGB(227,  0,  0)),
	// white circle
	GraphicsCommand(Ellipse,Point(320,240),122,122,RGB(253,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag objectum_pride_flag = Flag(
	"objectum",
	"The Objectum pride flag",
	"The creator/date of this flag is unknown", // https://www.lgbtqia.wiki/wiki/Objectum
	"objectum-sexuality",
	objectum_pride_flag_commands,
	RGB(0,0,0),
	4,
	LAYOUT_CENTER
);
