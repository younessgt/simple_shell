#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: first pointer, a destination string
 * @src: second pointer, source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int p;

	while (dest[i] != '\0')
		i++;
	p = i;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[p] = src[i];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
