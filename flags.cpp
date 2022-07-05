#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

int countCommands(GraphicsCommand commands[]){
	for(int i=0;i<MAX_COMMANDS;i++){
		if(commands[i].shape==EndCommandList){
			return i+1;
		}
	}
	return 0;
}

void Flag::flag_setup(const char far *shortname, 
		const char far *names, 
		const char far *credit, 
		const char far *aliases, 
		GraphicsCommand far *commands
){
	this->shortname=shortname;
	this->name=names;
	this->credit=credit;
	this->aliases=aliases;
	this->text_color=RGB(255,255,255);
	this->text_size=4;
	this->text_layout = LAYOUT_CENTER;
	this->commands = commands;
}


Flag::Flag(
	const char far *shortname,
	const char far *names,
	const char far *credits,
	const char far *aliases,
	GraphicsCommand commands[]
){
	this->flag_setup(shortname, names, credits, aliases, commands);
}
Flag::Flag(
	const char far *shortname,
	const char far *names,
	const char far *credits,
	const char far *aliases,
	GraphicsCommand commands[],
	RGBCOLOR text_color,
	int text_size
){
	this->flag_setup(shortname, names, credits, aliases, commands);
	this->text_color=text_color;
	this->text_size=text_size;
}
Flag::Flag(
	const char far *shortname,
	const char far *names,
	const char far *credits,
	const char far *aliases,
	GraphicsCommand commands[],
	RGBCOLOR text_color,
	int text_size,
	TextLayout text_layout
){
	this->flag_setup(shortname, names, credits, aliases, commands);
	this->text_color=text_color;
	this->text_size=text_size;
	this->text_layout = text_layout;
}

#define ALIASBUFFER_SIZE 200
char ALIASBUFFER[ALIASBUFFER_SIZE];

const char *Flag::listAliases(){
	if(aliases==NULL){
		return NULL;
	}
	const char *start=&aliases[0];
	const char *next;
	next=strchr(start, '|');
	if(next==NULL){ // Only one alias.
		return aliases;
	}
	ALIASBUFFER[0]=0;
	while(next!=NULL){
		strncat(ALIASBUFFER,start,next-start);
		strcat(ALIASBUFFER,", ");
		start=next+1;
		next=strchr(start, '|');
	}
	strcat(ALIASBUFFER,start);
	return ALIASBUFFER;
}

// There is probably a smarter way to marge this with listAliases, but I am not smart today
bool Flag::match(const char *name){
	if(stricmp(name,this->shortname)==0){
		return true;
	}
	if(aliases==NULL){
		// We have no aliases, so it's definitely not us
		return false;
	}
	const char *start=&aliases[0];
	const char *next;
	next=strchr(start, '|');
	if(next==NULL){ 
		// Only one alias, so check if it's that one
		return stricmp(name,aliases)==0;
	}
	while(next!=NULL){
		// Temporarily copy just this alias to the buffer
		memset(ALIASBUFFER, 0, ALIASBUFFER_SIZE);
		strncpy(ALIASBUFFER,start,next-start);
		if(stricmp(name,ALIASBUFFER)==0){
			return true; 
		}
		start=next+1;
		next=strchr(start, '|');
	}
	// Check the final alias in the string
	strcpy(ALIASBUFFER,start);
	return stricmp(name,ALIASBUFFER)==0;
}