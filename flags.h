#include "graphics.h"
#include "bool.h"

enum TextLayout {LAYOUT_CENTER, LAYOUT_RIGHT, LAYOUT_LEFT};

class Flag{
public:
	const char *shortname;
	const char *name;
	const char *credit;
	const char *aliases;
	GraphicsCommand	far *commands;
	RGBCOLOR text_color;
	int text_size;
	TextLayout text_layout;

	Flag(
		const char far *shortname, 
		const char far *names, 
		const char far *credit, 
		const char far *aliases, 
		GraphicsCommand far *commands,
		RGBCOLOR text_color,
		int text_size
	);
	Flag(
		const char far *shortname, 
		const char far *names, 
		const char far *credit, 
		const char far *aliases, 
		GraphicsCommand far *commands,
		RGBCOLOR text_color,
		int text_size,
		TextLayout text_layout
	);
	Flag(
		const char far *shortname, 
		const char far *names, 
		const char far *credit, 
		const char far *aliases, 
		GraphicsCommand far *commands
	);
	const char *listAliases();
	bool match(const char *name);

private:
	void flag_setup(const char far *shortname, 
		const char far *names, 
		const char far *credit, 
		const char far *aliases, 
		GraphicsCommand far *commands
	);
};

extern class Flag far *PRIDE_FLAGS[];

