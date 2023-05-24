#include "main.h"
/**
 * _strncmp - function that compare two strings and stop after n character
 * @str1: destination string
 * @str2: source string
 * @i: number of characters
 * Return: integer equal to 0 or < 0 or >0
 * if str1 is found respectively equal to str2 or <str2 or >str2
 */
int _strncmp(char *str1, char *str2, int i)
{
	unsigned char cp1 = (unsigned char)*str1;
	unsigned char cp2 = (unsigned char)*str2;

	while (i > 0 && cp1 && (cp1 == cp2))
	{
		++str1;
		++str2;
		--i;
	}
	if (i == 0)
		return (0);
	else
		return ((unsigned char)*str1 - (unsigned char)*str2);
}
