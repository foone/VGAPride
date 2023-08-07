#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

static GraphicsCommand lipstick_lesbian_colors_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(164,  0, 97)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(183, 85,146)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(208, 99,166)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(237,237,235)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(228,172,207)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(197, 78, 84)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(138, 30,  4)),
	GraphicsCommand(EndCommandList)
};

Flag lipstick_lesbian_colors_flag = Flag(
	"lipstick-lesbian-colors-lesbian",
	"A Lesbian Pride Flag using the Lipstick Lesbian flag colors",
	"Introduced on the blog This Lesbian Life in 2010",
	"lipstick-lesbian-colors",
	lipstick_lesbian_colors_commands,
	RGB(255,255,255),
	2
);


static GraphicsCommand sadlesbeandisaster_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(213, 45,  0)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(239,118, 39)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,154, 86)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(209, 98,164)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(181, 86,144)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(163,  2, 98)),
	GraphicsCommand(EndCommandList)
};

Flag sadlesbeandisaster_lesbian_flag = Flag(
	"sadlesbeandisaster-lesbian",
	"A Lesbian Pride Flag, chosen by the official-lesbian-flag tumblr",
	"Designed by sadlesbeandisaster (aka Emily) in 2018",
	"official-lesbian-flag|sadlesbeandisaster",
	sadlesbeandisaster_lesbian_flag_commands
);


static GraphicsCommand five_stripe_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(213, 45,  0)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,154, 86)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(211, 98,164)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(163,  2, 98)),
	GraphicsCommand(EndCommandList)
};

Flag five_stripe_lesbian_flag = Flag(
	"five-stripe-lesbian",
	"A 5-stripe version of the sadlesbeandisaster flag",
	"Originally designed by sadlesbeandisaster (aka Emily) in 2018",
	"lesbian5|lesbian",
	five_stripe_lesbian_flag_commands,
	RGB(255,255,255),
	3
);


static GraphicsCommand lydiandragon_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(102, 51,153)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(255,204, 51)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(102,204, 51)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(255,102,153)),
	GraphicsCommand(EndCommandList)
};

Flag lydiandragon_lesbian_flag = Flag(
	"lydiandragon-lesbian",
	"A Lesbian Pride Flag",
	"Designed by lydiandragon (aka Lydia) in 2018",
	"lydiandragon",
	lydiandragon_lesbian_flag_commands
);

static GraphicsCommand maya_kern_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(102, 51,153)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(255,102,153)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,204, 51)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(102,204, 51)),
	GraphicsCommand(EndCommandList)
};

Flag maya_kern_lesbian_flag = Flag(
	"maya-kern-lesbian",
	"A revised version of the lydiandragon Lesbian flag",
	"Originally designed by lydiandragon in 2018. Modified by Maya Kern in 2019",
	"maya-kern",
	maya_kern_lesbian_flag_commands,
	RGB(255,255,255),
	3
);

static GraphicsCommand femme_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(102, 51,153)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(204,153,255)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,204,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(255,102,153)),
	GraphicsCommand(EndCommandList)
};

Flag femme_lesbian_flag = Flag(
	"femme-lesbian",
	"A Femme Lesbian Pride Flag",
	"Designed by Rebecca Bettencourt in 2019",
	NULL,
	femme_lesbian_flag_commands
);


int polygon_labrys[]={308,369,311,161,301,152,294,153,286,158,275,178,267,197,258,179,252,162,248,141,249,119,254,94,264,70,268,69,278,95,290,109,296,111,304,110,314,100,319,97,324,99,332,109,340,111,347,110,355,103,365,86,372,69,375,70,383,88,389,108,390,122,391,143,385,168,378,191,373,197,361,172,351,158,340,152,332,158,327,161,331,366,331,372,311,372,-1,-1};
static GraphicsCommand labrys_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(153, 51,153)),
	GraphicsCommand(Triangle,Point(150,56),Point(489,56),Point(319,420),RGB(0,0,0)),

	GraphicsCommand(Polygon,polygon_labrys,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag labrys_flag = Flag(
	"labrys-lesbian",
	"The Labrys lesbian Flag: Designed for a special edition of the Palm Springs Gay and Lesbian Times",
	"Designed by Sean Campbel in 1999",
	NULL,
	labrys_lesbian_flag_commands
);


int polygon_lipstick0[]={59, 169, 70, 163, 74, 158, 68, 154, 56, 150, 70, 152, 85, 154, 98, 149, 90, 142, 78, 137, 67, 132, 78, 137, 89, 141, 100, 142, 110, 137, 102, 126, 90, 120, 98, 121, 107, 118, 99, 109, 91, 101, 87, 90, 93, 99, 99, 108, 108, 114, 113, 108, 120, 105, 109, 102, 101, 95, 113, 102, 126, 103, 138, 108, 143, 95, 141, 90, 145, 93, 152, 86, 152, 77, 156, 87, 164, 89, 172, 93, 174, 89, 176, 97, 181, 102, 189, 96, 193, 87, 196, 96, 200, 97, 206, 90, 211, 82, 211, 92, 221, 90, 230, 85, 230, 90, 243, 86, 255, 78, 264, 67, 256, 63, 247, 59, 240, 72, 244, 65, 243, 57, 233, 56, 233, 67, 228, 54, 219, 45, 216, 44, 212, 50, 210, 61, 210, 48, 202, 38, 190, 33, 192, 43, 195, 53, 196, 63, 193, 52, 189, 40, 184, 30, 173, 25, 162, 22, 150, 21, 151, 31, 156, 40, 157, 51, 154, 40, 146, 32, 136, 27, 127, 37, 128, 50, 129, 64, 125, 51, 123, 39, 118, 46, 113, 53, 106, 53, 106, 62, 108, 72, 105, 62, 98, 55, 83, 54, 70, 61, 59, 70, 53, 83, 49, 97, 54, 103, 59, 108, 48, 102, 45, 110, 44, 117, 54, 124, 61, 132, 53, 126, 44, 124, 41, 133, 40, 144, 47, 150, 39, 150, 36, 160, 41, 167, 35, 167, 33, 175, 33, 183, 44, 179, 50, 170, 59, 169, -1, -1};
int polygon_lipstick1[]={229, 97, 217, 99, 205, 101, 194, 107, 206, 115, 220, 121, 233, 129, 222, 124, 211, 119, 200, 115, 189, 111, 177, 115, 173, 129, 178, 140, 183, 151, 178, 140, 174, 135, 169, 138, 166, 151, 174, 162, 182, 174, 176, 165, 169, 157, 163, 149, 159, 155, 150, 154, 156, 166, 162, 178, 169, 189, 160, 179, 152, 166, 146, 154, 138, 152, 131, 151, 133, 164, 135, 176, 132, 165, 127, 154, 118, 146, 106, 148, 103, 160, 105, 173, 107, 186, 109, 198, 106, 185, 104, 171, 100, 157, 90, 157, 83, 161, 69, 167, 56, 174, 43, 182, 36, 194, 45, 202, 56, 209, 66, 215, 78, 220, 90, 223, 94, 209, 97, 219, 105, 226, 104, 215, 114, 223, 126, 227, 139, 225, 138, 212, 147, 220, 159, 221, 169, 214, 165, 203, 170, 210, 177, 213, 185, 206, 183, 195, 179, 184, 185, 196, 192, 207, 196, 195, 205, 199, 207, 190, 205, 180, 204, 178, 205, 180, 208, 187, 214, 193, 217, 184, 213, 174, 207, 165, 215, 176, 225, 184, 227, 175, 223, 163, 217, 155, 225, 165, 235, 172, 235, 159, 229, 147, 236, 154, 244, 159, 244, 149, 239, 140, 250, 146, 247, 137, 242, 128, 254, 135, 258, 121, 260, 107, 262, 93, 262, 79, 251, 84, 240, 91, 229, 97, -1, -1};

static GraphicsCommand lipstick_lesbian_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(164,  0, 97)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(183, 85,146)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(208, 99,166)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(237,237,235)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(228,172,207)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(197, 78, 84)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(138, 30,  4)),
	GraphicsCommand(Polygon,polygon_lipstick0,RGB(243,  9, 67)),
	GraphicsCommand(Polygon,polygon_lipstick1,RGB(243,  9, 67)),
	GraphicsCommand(PolygonOutline,polygon_lipstick0,RGB(  0,  0,  0)),
	GraphicsCommand(PolygonOutline,polygon_lipstick1,RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag lipstick_lesbian_flag = Flag(
	"lipstick-lesbian",
	"The Lipstick Lesbian pride flag",
	NULL,
	NULL,
	lipstick_lesbian_pride_flag_commands
);