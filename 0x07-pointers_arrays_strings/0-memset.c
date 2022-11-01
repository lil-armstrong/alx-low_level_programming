#include "main.h"

/**
 * _memset - fills a memeory area, s with a character, b,
 * n nunber of times
 * @ s - memory area pointer
 * @b - character to fill memory area with
 * @n - number of memory area to fill from the start
 *
 * Return: pointer to start of memory area
 */
char *_memset(char*s, char b, unsigned int n)
{
	while (n)
	{
		*(s + --n) = b;
	}
	return s;
}
