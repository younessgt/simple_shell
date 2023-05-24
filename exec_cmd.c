#include "main.h"
/**
 * exec_cmd - function that execute a command
 * @arg: the arguments  in the command
 * @buffer: the buffer where the command is stored
 * @p: pointer to character
 * @av: the argument vector
 * @i: the number of commands
 * Return: void function doesnt return
 */
void exec_cmd(char **arg, char *buffer, char *p, char **av, int i)
{
	char *cm = NULL;
	int r;
	pid_t child;

	if (arg == NULL)
		return;
	cm = arg[0];
	child = fork();

	if (child == -1)
		free_all(buffer, p, arg);
	if (child == 0)
	{
		r = execve(cm, arg, environ);
		if (r == -1)
		{
			print(av, arg, i);
			free_all(buffer, p, arg);
			exit(EXIT_FAILURE);
		}
	}
wait(NULL);
}
