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

	strcpy(p, buffer);
	tok =  strtok(p, " \t\n");
	while (tok != NULL)
	{
		if (_strcmp(tok, "exit") == 0)
		{
			free(buffer);
			exit(EXIT_SUCCESS);
		}
		tok = strtok(NULL, " \t\n");
	}
}
