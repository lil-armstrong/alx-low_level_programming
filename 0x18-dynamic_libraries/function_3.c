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

	while ((i++, *(dest + i)))
		;
	/* clang-format off */
	do {
		*(dest + i) = *(src), i++;
	} while (*(src++));
	*(dest + i) = '\0';

	return (dest);
}
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
	while (*(src) && nbytes++ < n)
	{
		*(dest + i) = *src;
		++i;
		src++;
	}
	*(dest + i) = '\0';

	return (dest);
}
/**
 * _strncpy -  copies a string.
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes to copy from @src
 * Return: pointer to the resulting operation
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
/**
 * _strcmp - compares string
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 - true, 0 - false
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);

		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/**
 * *_memset - fills a memeory area, s with a character, b,
 * n nunber of times
 * @s: memory area pointer
 * @b: character to fill memory area with
 * @n: number of memory area to fill from the start
 *
 * Return: pointer to start of memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		*(s + --n) = b;
	}
	return (s);
}
