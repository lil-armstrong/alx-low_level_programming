#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to encode
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char m[] = {
		'4', 'a',
		'3', 'e',
		'0', 'o',
		'7', 't',
		'1', 'l'
	};
	int i = 0, j, diff = ('a' - 'A');

	while (s[i])
	{
		for (j = 1; m[j]; j += 2)
		{
			if (s[i] == m[j] || s[i] == (m[j] - diff))
			{
				s[i] = m[j - 1];
				break;
			}
		}
		++i;
	}
	return (s);
}

