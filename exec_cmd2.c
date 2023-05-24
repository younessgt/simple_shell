#include "main.h"
/**
 * exec_cmd2 - function that execute a command with no path
 * @arg: the arguments  in the command
 * @buffer: the buffer where the command is stored
 * @p: pointer to character
 * @av: the argument vector
 * @i: the number of commands
 * @arg2: full path arguments
 * Return: void function doesnt return
 */
void exec_cmd2(char **arg2, char *buffer, char *p, char **av, int i,
		char **arg)
{
	char *cm = NULL;
	int r;
	pid_t child;

	if (arg2 == NULL)
		return;
	cm = arg2[0];
	child = fork();

	if (child == -1)
		free_all(buffer, p, arg2);
	if (child == 0)
	{
		r = execve(cm, arg, environ);
		if (r == -1)
		{
			print(av, arg2, i);
			free_all(buffer, p, arg2);
			exit(EXIT_FAILURE);
		}
	}
wait(NULL);
}
