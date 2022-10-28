#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: *char
 */
char *_strcat(char *dest, char *src)
{
	int i = -1;

	while ((i++, *(dest + i)));

	do{
		*(dest + i) = *(src), i++;
	}
	while (*(src++));
	*(dest+i) = '\0';

	return (dest);
}
