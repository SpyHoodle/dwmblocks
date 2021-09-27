//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/		                  /*Interval*/    /*Signal*/
	{"",     "~/dwmblocks/scripts/sb-memory",         1,              14},
	{"",     "~/dwmblocks/scripts/sb-cpu",            1,              18},
	{"",     "~/dwmblocks/scripts/sb-disk",           30,             0},
	{"",     "~/dwmblocks/scripts/sb-volume",         0,              10},
	{"",     "~/dwmblocks/scripts/sb-forecast",       36000,          5},
	{"",     "~/dwmblocks/scripts/sb-clock",          1,              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
