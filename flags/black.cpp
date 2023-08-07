#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

static GraphicsCommand black_queer_femme_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB( 76, 26, 19)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(102, 28, 15)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(119, 36, 20)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(210,102, 99)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(176, 35, 67)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(147, 20, 49)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(115,  1,  1)),
	GraphicsCommand(EndCommandList)
};

Flag black_queer_femme_flag = Flag(
	"black-queer-femme",
	"A Black queer femme flag",
	"Created by Bella (@anarchy-kisses on tumblr) in 2023", 
	"black-femme",
	black_queer_femme_commands
);