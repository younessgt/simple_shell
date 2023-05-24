#include "main.h"

void free_all(char *buffer, char *p, char **arg)
{
	free(buffer);
	free(p);
	freearg(arg);
}
