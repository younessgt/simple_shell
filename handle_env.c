#include "main.h"
/**
 * _puts - functoin that print a string
 * @str: pointer to character
 * @id: identifier
 * Return: nothing
 */
void _puts(char *str, int id)
{
	write(id, str, _strlen(str));
}
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
			_puts(environ[i], STDOUT_FILENO);
			_puts("\n", STDOUT_FILENO);
		}
	}
}
