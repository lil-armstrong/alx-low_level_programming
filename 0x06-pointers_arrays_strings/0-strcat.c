#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: *char
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	i = 0;
	for (i; dest[i]; ++i, ++len);

	i = 0;
	for (i; src[i]; ++i)
	{
		dest[len++] = src[i]
	}

	return (dest)
}

