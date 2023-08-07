#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

int polygon_south_africa0[]={192,240,0,96,0,58,242,239,-1,422,-1,383,-1,-1};
int polygon_south_africa1[]={77,0,129,0,341,160,640,160,639,191,330,191,-1,-1};
int polygon_south_africa2[]={75,480,331,288,639,288,640,320,341,320,129,480,-1,-1};

static GraphicsCommand gay_flag_of_south_africa_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),

	GraphicsCommand(Polygon,polygon_south_africa0,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_south_africa1,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_south_africa2,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag gay_flag_of_south_africa = Flag(
	"gay-flag-of-south-africa",
	"The gay flag of South Africa",
	"Designed by Eugene Brockman in 2010",
	"south-africa|sa",
	gay_flag_of_south_africa_commands,
	RGB(255,255,255),
	3,
	LAYOUT_RIGHT
);

static GraphicsCommand pink_union_jack_flag_commands[]={
	// White background
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(255,255,255)),
	// Red cross
	GraphicsCommand(Rectangle, Left(h_5_2), Right(h_5_3), RGB(224,  0, 52)),
	GraphicsCommand(Rectangle, Top(288), Bottom(352), RGB(224,  0, 52)),

	// Red saltire of St. Patrick
	// Top left
	GraphicsCommand(Quad, Point(0,35), Point(0,0), Point(213,160), Point(165,160), RGB(224,  0, 52)),
	// Top right
	GraphicsCommand(Quad, Point(379,160), Point(591,0), Point(640,0), Point(427,160), RGB(224,  0, 52)),
	// Bottom left
	GraphicsCommand(Quad, Point(0,480), Point(212,320), Point(260,320), Point(48,480), RGB(224,  0, 52)),
	// Bottom right
	GraphicsCommand(Quad, Point(427,320), Point(475,320), Point(640,444), Point(640,480), RGB(224,  0, 52)),
	// Pink triangles
	GraphicsCommand(Triangle,Point(0,53),Point(142,160),Point(0,160),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(0,320),Point(142,320),Point(0,426),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(72,480),Point(267,333),Point(267,480),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(373,333),Point(568,480),Point(373,480),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(499,320),Point(640,320),Point(640,426),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(499,160),Point(640, 53),Point(640,160),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(373,  0),Point(568,  0),Point(373,146),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point( 72,  0),Point(267,  0),Point(267,146),RGB(250,135,210)),


	GraphicsCommand(EndCommandList)
};

Flag pink_union_jack_flag = Flag(
	"pink-union-jack",
	"A pink variant on the Union Jack flag",
	"Designed by David Gwinnutt and launched in 2006",
	"pink-jack",
	pink_union_jack_flag_commands,
	RGB(0,0,0),
	4
);

int polygon_canada[]={314,407,316,330,312,326,252,336,257,313,256,306,195,247,210,237,210,230,200,184,232,193,238,193,244,172,248,172,275,210,279,211,283,208,271,123,289,136,294,136,320,82,343,135,348,136,369,124,356,198,357,208,362,211,392,171,394,172,399,191,403,194,439,184,429,230,429,238,444,246,385,305,382,315,387,336,325,325,323,329,324,408,-1,-1};
static GraphicsCommand canada_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(Rectangle,Top(v_4_1),Bottom(v_4_3),RGB(255,0,255)),
	GraphicsCommand(Polygon,polygon_canada,RGB(228,  3,  3)),
	GraphicsCommand(EndCommandList)
};

Flag canada_pride_flag = Flag(
	"canada",
	"The Canada Pride Flag",
	NULL,
	NULL,
	canada_pride_flag_commands,
	RGB(0,0,0),
	4
);