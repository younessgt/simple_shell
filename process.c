#include "main.h"
/**
 * _process - function that call all the processes
 * @buffer: buffer where getline stock the commands
 * @i: number of commands
 * @p: pointer to character
 * @av: the argument vector
 * Return: -1 if it fails and 1 if it successed
 */
int _process(char *buffer, int i, char *p, char **av)
{
	char **arg;
	const char *file;
	int c;

	c = num_tok(buffer, p);
	if (c > 0)
	{
		arg = extract_tok(p, c);
		if (arg == NULL)
		{
			free_all(buffer, p, arg);
			return (-1);
		}
		file = arg[0];
		if (access(file, F_OK) == -1)
			envr(arg, buffer, p, c, av, i);
		else
			exec_cmd(arg, buffer, p, av, i);
		free(p);
		freearg(arg);
	}
	return (1);
}
