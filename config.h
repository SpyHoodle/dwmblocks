#define CMDLENGTH 100
#define DELIMITER " "
#include "/home/spy/cols/dwmblocks.h"

const Block blocks[] = {
	BLOCK("echo ^c#D6DEEB^[ ^c#56B6C2^$(sb-volume)^c#D6DEEB^ ]",           0,    1)
	BLOCK("echo ^c#D6DEEB^[ ^c#C678DD^$(sb-disk)^c#D6DEEB^ ]",             1,    2)
	BLOCK("echo ^c#D6DEEB^[ ^c#D19A66^$(sb-memory)^c#D6DEEB^ ]",           1,    3)
	BLOCK("echo ^c#D6DEEB^[ ^c#61AFEF^$(sb-cpu) $(sb-temp)^c#D6DEEB^ ]",   5,    4)
	BLOCK("echo ^c#D6DEEB^[ ^c#98C379^$(sb-kernel)^c#D6DEEB^ ]",           5,    5)
	BLOCK("echo ^c#D6DEEB^[ ^c#E06C75^$(sb-clock)^c#D6DEEB^ ]",            1,    6)
};
