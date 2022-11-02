#include "main.h"

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
