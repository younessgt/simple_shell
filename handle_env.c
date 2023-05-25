#include "main.h"
/**
 * handle_env - function that handle env
 * @buffer: buffer where getline stock the commands
 * Return: nothing
 */
void handle_env(char *buffer)
{
	int i;

	if (_strcmp(buffer, "env\n") == 0)
	{
		for (i = 0; environ[i] != NULL ; i++)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 3);
		}
	}
}
