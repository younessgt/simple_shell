#include "main.h"

int num_tok(char *buffer, char *p)
{
	char *tok;
	int n = 0;

	tok = strtok(buffer, " \n");
	if (tok == NULL)
	{
		free(p);
		return (0);
	}
	while (tok != NULL)
	{
		n++;
		tok = strtok(NULL, " \n");
	}
	return (n);
}
