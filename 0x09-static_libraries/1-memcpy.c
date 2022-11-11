#include "main.h"

/**
 * *_memcpy - copies a memory area src, to memory area dest
 * n nunber of times
 * @dest: destination memory area pointer
 * @src: source memory area
 * @n: number of memory area to fill from the start
 *
 * Return: pointer to start of dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		--n;
		*(dest + n) = *(src + n);
	}
	return (dest);
}
