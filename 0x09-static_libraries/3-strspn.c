#include "main.h"

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
