#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"



static GraphicsCommand voidpunk_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(  0),Right(101),RGB( 55, 46, 73)),
	GraphicsCommand(Rectangle,Left(101),Right(219),RGB(158,116,182)),
	GraphicsCommand(Rectangle,Left(219),Right(262),RGB(233,233,233)),
	GraphicsCommand(Rectangle,Left(262),Right(379),RGB( 81,172, 86)),
	GraphicsCommand(Rectangle,Left(379),Right(480),RGB( 32, 69, 44)),
	// grey circle
	GraphicsCommand(Ellipse,Point(320,240),103,103,RGB(233,233,233)),
	// black circle inside grey circle
	GraphicsCommand(Ellipse,Point(320,240),72,72,RGB( 27, 23, 30)),

	GraphicsCommand(EndCommandList)
};

Flag voidpunk_pride_flag = Flag(
	"voidpunk",
	"The voidpunk pride flag",
	"Created in 2018 by tumblr user simeleons (Simon)", // https://simeleons.tumblr.com/post/179520932707/i-tried-my-hand-at-making-a-voidpunk-flag-d-the
	"void-punk",
	voidpunk_pride_flag_commands
);
