#include "main.h"
/**
 * copy_buff - function that copy a buffer
 * @buffer: the buffer where getline function stock the command
 * @res: number of character reads
 * Return: NUll if it fails and pointer to character if it successed
 */
char *copy_buff(char *buffer, ssize_t res)
{
	char *p = NULL;

	p = malloc(sizeof(char) * (res + 1));
	if (p == NULL)
	{
		perror("No memory allocated\n");
		return (NULL);
	}
	_strcpy(p, buffer);
	return (p);
}
