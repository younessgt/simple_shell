#include "main.h"
/**
 * extract_tok - function to extract and copy token
 * @p: pointer to character (copied buffer)
 * @n: number of token
 * Return: NUll if it fails or pointer to character if it successed
 */
char **extract_tok(char *p, int n)
{
	char *tok;
	int i, j;
	char **arg;

	arg = malloc(sizeof(char *) * (n + 1));
	if (arg == NULL)
		return (NULL);
	tok = strtok(p, " \n");
	for (i = 0; tok != NULL; i++)
	{
		arg[i] = malloc(sizeof(char) * (_strlen(tok) + 1));
		if (arg[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arg[j]);
			}
			free(arg);
			return (NULL);
		}
		_strcpy(arg[i], tok);
		tok = strtok(NULL, " \n");

	}
	arg[i] = NULL;
	return (arg);
}
