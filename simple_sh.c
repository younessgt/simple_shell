#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include "main.h"
/**
 * main - entry point
 * @ac : the number of arguments
 * @av: the argument vector
 * Return: 0 on success, -1 on failure
 */
int main(int ac __attribute__((unused)), char **av)
{
	char *buffer = NULL, *p;
	size_t n;
	ssize_t res;
	int i = 0, intera, j;

	intera = isatty(STDIN_FILENO);
	if (intera == 1)
		write(1, "$ ", 3);
	while ((res = getline(&buffer, &n, stdin)) != -1)
	{

		i++;
		if (_strcmp(buffer, "exit\n") == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		p = copy_buff(buffer, res);  /* copy of the buffer*/
		if (p == NULL)
		{
			free(buffer);
			return (-1);
		}
		j = _process(buffer, i, p, av);
		if (j == -1)
			return (-1);
		if (intera == 1)
			write(1, "$ ", 3);
	}
	if (res == -1)
	{
		free(buffer);
		write(STDOUT_FILENO, "\n", 3);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
