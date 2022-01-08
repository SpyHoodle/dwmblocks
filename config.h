#define CMDLENGTH 50
#define DELIMITER " | "

const Block blocks[] = {
	BLOCK("sb-volume",  0, 5)
	BLOCK("sb-disk",    5, 20)
	BLOCK("sb-memory",  5, 18)
	BLOCK("sb-cpu",     5, 19)
	BLOCK("sb-clock",   1, 21)
};
