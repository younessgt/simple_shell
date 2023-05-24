#include "main.h"
/**
 * num_tok - function that extract the number of tokens
 * @buffer: buffer where getline stock the commands
 * @p: pointer to character (copy of the buffer)
 * Return: 0 if there is no token else return the number of tokens
 */
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
