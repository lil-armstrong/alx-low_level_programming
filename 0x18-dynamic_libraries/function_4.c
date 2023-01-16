#include "main.h"

/**
 * *_memcpy - copies a memory area src, to memory area dest
 * n nunber of times
 * @dest: destination memory area pointer
 * @src: source memory area
 * @n: number of memory area to fill from the start
 * Return: pointer to start of dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{}

/**
 * *_strchr - locates a character in a string.
 * @s: pointer to character string
 * @c: character to locate
 * Return: pointer to character position
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s--);
		s++;
	}
	return (NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to character string
 * @accept:  number of accepted bytes
 * Return: number of byte in the intitial segment of s,
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, f;

	while (*(s + i))
	{
		f = 0;
		j = 0;
		while (*(accept + j))
		{

			if (*(s + i) == *(accept + j))
			{
				f = 1;
				break;
			}

			j++;
		}

		if (!f)
			break;
		++i;
	}

	return (i);
}

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: pointer to character string
 * @accept: number of acceptable bytes
 * Return: pointer to the byte in s that matches one of the
 * bytes in accept, or NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{

			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
			}

			j++;
		}

		++i;
	}

	return (NULL);
}
/**
 * *_strstr -  finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string to search string from
 * @needle: string to search for
 * Return: pointer to the beginning of the located substring, or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int found, j;

	while (*haystack)
	{
		found = 0;
		for (j = 0; *(needle + j); ++j)
		{
			if (*(haystack + j) != *(needle + j))
			{
				found = 0;
				break;
			}
			found = 1;
		}

		if (found)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
