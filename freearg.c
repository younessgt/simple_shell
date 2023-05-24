#include "main.h"


void freearg(char **arg)
{
	int i;

	if (arg == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; arg[i] != NULL; i++)
		free(arg[i]);
	free(arg);
}
