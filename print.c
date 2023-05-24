#include "main.h"
/**
 * print - function that print not found error
 * @av: the argument vector
 * @arg: arry of pointers to character
 * @i: number of commands
 * Return: nothing
 */
void print(char **av, char **arg, int i)
{
	char *buff_num;

	write(STDOUT_FILENO, av[0], _strlen(av[0]));
	write(STDOUT_FILENO, ": ", 2);
	buff_num = num_to_string(i);
	if (buff_num != NULL)
	{
		write(STDOUT_FILENO, buff_num, _strlen(buff_num));
		free(buff_num);
		write(STDOUT_FILENO, ": ", 2);
		write(STDOUT_FILENO, arg[0], _strlen(arg[0]));
		write(STDOUT_FILENO, ": ", 2);
		write(STDOUT_FILENO, "not found\n", 10);
	}
}
