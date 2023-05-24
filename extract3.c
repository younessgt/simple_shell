#include "main.h"
/**
 * str_extract - function that handle the path
 * @env_copy: copy of environ string
 * @arg: array of pointer to character
 * @buffer: the buffer where the command is stored
 * @n: number of token
 * @av: the argument vector
 * @j: number of commands
 * @p: pointer to character
 * Return: nothing
 */
void str_extract(char *env_copy, char **arg, char *buffer, int n,
char **av, int j, char *p)
{
	char *tok;
	char **arg2 = NULL;
	char buff[1024];
	char buff1[3] = "/";
	const char *file;

	tok = strtok(env_copy, ":");
	while (tok != NULL)
	{
		_strcpy(buff, tok);
		_strcat(buff, buff1);
		_strcat(buff, arg[0]);
		file = buff;
		if (access(file, F_OK) == 0)
		{
			free(env_copy);
			arg2 = extract2_tok(buff, n, arg);
			exec_cmd(arg2, buffer, p, av, j);
			freearg(arg2);
			return;
		}
		tok = strtok(NULL, ":");
	}
	if (tok == NULL)
	{
		print(av, arg, j);
		free(env_copy);
		return;
	}
}
