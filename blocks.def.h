//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", 		"~/.scripts/memory",	30,			1},
	{"", 		"~/.scripts/volume",	0,			2},
	{"", 		"~/.scripts/battery",	30,			3},
	{"", 		"~/.scripts/date",	0,			4},
	{"",		"~/.scripts/time",	60,			5},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 0;
