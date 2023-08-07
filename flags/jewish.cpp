#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"


int polygon_star_of_david0[]={232,292,319,135,319,169,260,274,-1,-1};
int polygon_star_of_david1[]={232,292,260,274,377,274,406,291,-1,-1};
int polygon_star_of_david2[]={319,135,406,291,377,274,319,169,-1,-1};
int polygon_star_of_david3[]={319,342,232,188,260,203,319,310,-1,-1};
int polygon_star_of_david4[]={232,188,406,187,378,203,260,203,-1,-1};
int polygon_star_of_david5[]={319,310,378,203,406,187,319,342,-1,-1};

static GraphicsCommand jewish_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(Polygon,polygon_star_of_david0,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david1,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david2,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david3,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david4,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david5,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag jewish_pride_flag = Flag(
	"jewish",
	"The Jewish Pride Flag",
	NULL,
	NULL,
	jewish_pride_flag_commands
);
