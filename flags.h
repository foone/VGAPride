#include "graphics.h"
#include "bool.h"


class Flag{
public:
	const char *shortname;
	const char *name;
	const char *credit;
	const char *aliases;
	GraphicsCommand	 *commands;
	Flag(const char far *shortname, const char far *names, const char far *credit, const char far *aliases, GraphicsCommand far *commands);
	const char *listAliases();
	bool match(const char *name);

};

extern class Flag far *PRIDE_FLAGS[];

