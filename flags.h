#include "graphics.h"
#include "bool.h"


class Flag{
public:
	const char *shortname;
	const char *name;
	const char *credit;
	const char *aliases;
	GraphicsCommand	 *commands;
	Flag(const char *shortname, const char *names, const char *credit, const char *aliases, GraphicsCommand *commands);
	const char *listAliases();
	bool match(const char *name);

};

extern class Flag *PRIDE_FLAGS[];

