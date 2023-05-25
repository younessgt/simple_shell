#include "main.h"
/**
 *  handle_exit - function that handle exit
 *  @buffer: buffer where getline stock the commands
 *  Return: nothing
 */
void handle_exit(char *buffer)
{
	char p[1024];
	char *tok;

	_strcpy(p, buffer);
	tok =  strtok(p, " \t\n");
	if (tok != NULL)
	{
		_strcat(tok, "\n");
		if (_strcmp(tok, "exit\n") == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
	}
}
