#include "main.h"
# include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: *char
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (*(dest + len))
	{
		len++;
	}

	*(dest + len++) = *(src);
	while (*(src++))
	{
		*(dest + len++) = *(src);
		i++;

	}
	*(dest + len) = '\0';

	return (dest);
}

