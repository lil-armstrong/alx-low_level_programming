#include "main.h"
#include <stdio.h>
/**
 * _strncat -  concatenates two strings.
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes to concatenate
 * Return: pointer to the resulting operation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = -1;
	long nbytes = 0;

	while ((i++, *(dest + i)))
	;

	do {
		*(dest + i) = *(src),
		i++;
	} while (*(src++) && ++nbytes < n);
	*(dest + i) = '\0';

	return (dest);
}
