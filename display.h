typedef struct{
	int palette_entry;
	RGBCOLOR color;
} PaletteMap;

void clearPalette();
int getPalette(RGBCOLOR rgb);
void realizePalette();
void displayFlag(Flag *flag);