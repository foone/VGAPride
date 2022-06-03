#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "flags.h"
#include "vgapride.h"
#include "display.h"

int main(int argc, char**argv){
	if(argc!=2){
		displayUsage();
		return 2;
	}
	int gdriver = VGA, gmode=VGAHI;
	for(int i=0;;i++){
		Flag *flag=PRIDE_FLAGS[i];
		if(flag==NULL)break;
		if(flag->match(argv[1])){
			int errorcode = registerbgidriver(EGAVGA_driver);
			if(errorcode<0){
				printf("Couldn't register compiled-in BGI driver!");
				return 5;
			}
			initgraph(&gdriver, &gmode, "");
			errorcode = graphresult();
			if(errorcode != grOk){
				printf("Graphics error: %s\n", grapherrormsg(errorcode));
				return 1;
			}
			displayFlag(flag);
			getch();
			closegraph();
			return 0;
		}
		
	}
	// If we didn't find a flag, see if they were asking for a LIST
	if(stricmp(argv[1], "list")==0){
		displayFlags();
		return 2;
	}
	displayUsage();
	printf("\nFlag \"%s\" not found.\n",argv[1]);
	return 2;
}

void displayFlags(){
	printf("Available flags:\n");
	for(int i=0;;i++){
		Flag *flag=PRIDE_FLAGS[i];
		if(flag==NULL)break;
		printf("\n* %s:\n", flag->shortname);
		const char *aliases=flag->listAliases();
		if(aliases!=NULL){
			printf("  aliases: %s\n", aliases);
		}
		printf("  %s\n", flag->name);
		if(flag->credit!=NULL){
			printf("  %s\n", flag->credit);
		}
	}
}
void displayUsage(){
	printf("VGAPride 0.1 by Foone Turing (@foone), 2022\n\n");
	printf("Usage: VGAPRIDE <FLAGNAME>\n");
	printf("run VGAPRIDE LIST | MORE to see a list of available flags. \n");
}