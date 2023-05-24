#include "main.h"


int _process(char *buffer, int i, char *p, char **av)
{
	char **arg;
	const char *file;
	int c;

	c = num_tok(buffer, p); /* extract number of token */
	if (c > 0)
	{
		arg = extract_tok(p, c); /* extracting tokens + copy token to arra*/
		if (arg == NULL)
		{
			free_all(buffer, p, arg);
			return (-1);
		}
		file = arg[0];
		if (access(file, F_OK) == -1) /* check if the file exist*/
			envr(arg, buffer, p, c, av, i);
		else
			exec_cmd(arg, buffer, p, av, i); /* excute */
		free(p);
		freearg(arg);
	}
	else
		write(1, "$ ", 3);
	return (1);
}
