//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "sb-network", 5, 0},
  {"", "sb-volume", 0, 10},
  {"", "sb-memory", 5, 0},
  {"", "sb-cpu", 5, 0},
  {"", "sb-temp", 5, 0},
  {"", "sb-bat", 20, 0},
  {"", "sb-date", 60, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 1;
