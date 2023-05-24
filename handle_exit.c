#include "main.h"
/**
 * handle_exit - function that handle exit
 * @buffer: buffer where getline stock the commands
 * Return: nothing
 */
void handle_exit(char *buffer)
{
	char p[1024];
	char *tok;

	_strcpy(p, buffer);
	tok =  strtok(p, " \t\n");
	while (tok != NULL)
	{
		if (_strcmp(tok, " ") == 0 || _strcmp(tok, "\t") == 0 ||
				_strcmp(tok, "exit") == 0)
		{
			if (_strcmp(tok, "exit") == 0)
			{
				free(buffer);
				exit(EXIT_SUCCESS);
			}
			tok = strtok(NULL, " \t\n");
		}
		break;
	}
}
