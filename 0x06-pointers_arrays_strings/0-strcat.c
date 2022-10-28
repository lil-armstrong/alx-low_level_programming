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
	int i, j;

	i = 0, j = 0;

	while (dest[i])
	{
		i++;
	}

/*	*(dest + len++) = *(src);*/
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;

	}
	dest[i] = '\0';

	return (dest);
}

