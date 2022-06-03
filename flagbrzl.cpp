#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

// This has to be a separate file because Brazil's flag is so complicated it breaks the compiler

int polygon_brazil0[]={182,222,189,195,238,185,282,182,326,184,365,194,393,206,414,219,433,233,451,250,456,254,454,272,451,283,433,263,407,242,377,224,342,212,315,207,280,205,252,207,229,211,-1,-1};
int polygon_letter0[]={232,204,228,203,226,198,228,193,233,192,236,195,236,203,232,204,-1,-1};
int polygon_letter1[]={241,203,239,191,246,190,248,193,246,197,241,197,246,197,251,202,-1,-1};
int polygon_letter2[]={255,202,252,190,258,189,262,192,263,197,260,200,255,202,-1,-1};
int polygon_letter3[]={274,200,267,200,265,189,274,188,-1,-1};
int polygon_letter4[]={273,194,267,194,-1,-1};
int polygon_letter5[]={278,199,279,187,284,199,288,187,290,199,-1,-1};
int polygon_letter6[]={306,200,299,200,298,189,306,189,-1,-1};
int polygon_letter7[]={306,194,299,194,-1,-1};
int polygon_letter8[]={315,201,316,190,323,190,324,194,322,197,315,196,-1,-1};
int polygon_letter9[]={327,203,328,191,335,193,337,196,333,198,327,198,333,198,336,204,-1,-1};
int polygon_letter10[]={344,207,341,205,340,200,344,195,348,195,351,198,349,206,344,207,-1,-1};
int polygon_letter11[]={360,205,364,207,363,210,358,211,354,209,355,203,358,199,363,199,365,204,-1,-1};
int polygon_letter12[]={366,214,371,203,377,205,378,209,374,211,369,209,374,211,375,217,-1,-1};
int polygon_letter13[]={386,223,378,219,382,208,390,212,-1,-1};
int polygon_letter14[]={388,216,381,213,-1,-1};
int polygon_letter15[]={390,222,392,226,396,227,398,225,395,221,393,218,394,215,398,215,400,219,-1,-1};
int polygon_letter16[]={400,229,401,232,403,233,406,234,407,229,404,225,405,222,408,223,411,224,411,228,-1,-1};
int polygon_letter17[]={414,242,411,238,412,234,415,231,418,230,422,232,422,236,420,240,417,243,413,241,-1,-1};


GraphicsCommand gay_brazil_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	// Yellow diamond
	GraphicsCommand(Quad, Left(h_2_1), Top(v_2_1), Right(h_2_1), Bottom(v_2_1), RGB(248,195,  0)),
	// Globe
	GraphicsCommand(Ellipse,Point(v_2_1,h_2_1),137,137,RGB( 40, 22,111)),
	// Banner
	GraphicsCommand(Polygon,polygon_brazil0,RGB(255,255,255)),
	// Letters oh god
	GraphicsCommand(ThickLines,polygon_letter0,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter1,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter2,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter3,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter4,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter5,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter6,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter7,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter8,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter9,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter10,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter11,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter12,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter13,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter14,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter15,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter16,RGB(  0,146, 63)),
	GraphicsCommand(ThickLines,polygon_letter17,RGB(  0,146, 63)),
	
	// So many stars!
	GraphicsCommand(Star,Point(373,179),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(410,286),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(201,241),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(295,304),TinyStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(288,314),TinyStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(295,363),TinyStar,RGB(255,255,255)),

	GraphicsCommand(Star,Point(253,254),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(231,265),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(220,281),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(220,307),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(248,304),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(245,324),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(268,331),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(277,311),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(291,286),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(311,307),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(299,325),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(342,236),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(342,236),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(344,322),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(358,347),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(366,322),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(384,321),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(380,342),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(379,359),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(404,309),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(419,306),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(411,321),MediumStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(426,289),MediumStar,RGB(255,255,255)),



	GraphicsCommand(EndCommandList)
};

Flag gay_brazil_flag = Flag(
	"gay-brazil-flag",
	"The Gay flag of Brazil",
	"Designed by Greg Gomes of Gay Flags of the World",
	"rainbow-brazil|brazil",
	gay_brazil_flag_commands
);

