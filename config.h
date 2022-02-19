#define CMDLENGTH 100
#define DELIMITER "^c#D6DEEB^ | "
#include "/home/spy/cols/dwmblocks.h"

const Block blocks[] = {
	BLOCK("echo ^c#56B6C2^$(sb-volume)",           0,    1)
	BLOCK("echo ^c#C678DD^$(sb-disk)",             1,    2)
	BLOCK("echo ^c#D19A66^$(sb-memory)",           1,    3)
	BLOCK("echo ^c#61AFEF^$(sb-cpu) $(sb-temp)",   5,    4)
	BLOCK("echo ^c#98C379^$(sb-kernel)",           5,    5)
	BLOCK("echo ^c#E06C75^$(sb-clock)",            1,    6)
};
