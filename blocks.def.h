//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-network",          5,                  0},
	{"", "sb-volume",           0,                  1},
	{"", "sb-backlight",        0,                  2},
	{"", "sb-battery",          5,                  0},
	{"", "sb-clock",            5,                  0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 3;
