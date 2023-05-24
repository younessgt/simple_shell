#include "main.h"



void print(char **av, char **arg, int i)
{
	char *buff_num;

	write(STDOUT_FILENO, av[0], strlen(av[0]));
	write(STDOUT_FILENO, ": ", 2);
	buff_num = num_to_string(i);
	if (buff_num != NULL)
	{
		write(STDOUT_FILENO, buff_num, strlen(buff_num));
		free(buff_num);
		write(STDOUT_FILENO, ": ", 2);
		write(STDOUT_FILENO, arg[0], strlen(arg[0]));
		write(STDOUT_FILENO, ": ", 2);
		write(STDOUT_FILENO, "not found\n", 10);
	}
}
