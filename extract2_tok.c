#include "main.h"
/**
 * extract2_tok - function to extract and copy token
 * @p: pointer to character
 * @n: number of token
 * @arg: array of pointers to character
 * Return: NULL if it fails or pointer to character if it successed
 */
char **extract2_tok(char *p, int n, char **arg)
{
	int i, j;
	char **arg2;

	arg2 = malloc(sizeof(char *) * (n + 1));
	if (arg2 == NULL)
		return (NULL);
	arg2[0] = malloc(sizeof(char) * (_strlen(p) + 1));
	if (arg2[0] == NULL)
	{
		free(arg2);
		return (NULL);
	}
	_strcpy(arg2[0], p);
	for (i = 1; i < n; i++)
	{
		arg2[i] = malloc(sizeof(char) * (_strlen(arg[i]) + 1));
		if (arg2[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arg2[j]);
			}
			free(arg2);
			return (NULL);
		}
		_strcpy(arg2[i], arg[i]);
	}
	arg2[i] = NULL;
	return (arg2);
}
