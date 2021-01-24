//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sb-volume", 0, 10},
	{"", "sb-cpu", 10, 0},
	{"", "sb-memory", 10, 0},
	{"", "date '+%A, %d %B %Y - %H:%M '", 10, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "  ";
static unsigned int delimLen = 5;
