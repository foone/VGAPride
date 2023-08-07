#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"





int polygon_rubber0[]={0,113,306,113,400,271,410,275,639,131,639,202,388,372,282,181,-1,181,-1,-1};
int polygon_rubber1[]={315,86,411,244,640,101,639,132,410,275,401,272,304,113,0,113,-1,86,-1,-1};
int polygon_rubber2[]={0,205,-1,181,281,181,387,371,640,202,638,234,388,400,378,398,272,205,-1,-1};
int polygon_rubber3[]={0,262,238,262,355,479,330,480,228,290,0,290,-1,-1};
int polygon_rubber4[]={388,480,640,303,640,334,429,483,-1,-1};


static GraphicsCommand rubber_pride_flag_commands[]={
	// black background
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(0,0,0)),
	// Wide yellow stripe
	GraphicsCommand(Polygon,polygon_rubber0,RGB(255,255,  0)),
	// Red stripes
	GraphicsCommand(Polygon,polygon_rubber1,RGB(204,  0, 51)),
	GraphicsCommand(Polygon,polygon_rubber2,RGB(204,  0, 51)),
	GraphicsCommand(Polygon,polygon_rubber3,RGB(204,  0, 51)),
	GraphicsCommand(Polygon,polygon_rubber4,RGB(204,  0, 51)),

	GraphicsCommand(EndCommandList)
};

Flag rubber_pride_flag = Flag(
	"rubber-pride",
	"The Rubber Pride flag",
	"Designed by Peter Tolos and Scott Moats in 1995",
	"rubber",
	rubber_pride_flag_commands
);
