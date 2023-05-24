#include "main.h"
/**
 * envr - function that handle the env variable
 * @arg: array of pointers to character
 * @buffer: buffer where getline stock the commands
 * @p: pointer to character
 * @n: number of token
 * @av: the argument vector
 * @j: number of commands
 * Return: nothing
 */
void envr(char **arg, char *buffer, char *p, int n, char **av, int j)
{
	char *env_path = NULL, *env_copy;
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		if (_strncmp(environ[i], "PATH=", 5) == 0)
		{
			env_path = environ[i] + 5;
			break;
		}
	}
	if (env_path == NULL)
	{
		perror("no env_path\n");
		return;
	}
	env_copy = _strdup(env_path);
	if (env_copy == NULL)
	{
		perror(" no env copy\n");
		return;
	}
	str_extract(env_copy, arg, buffer, n, av, j, p);
}
