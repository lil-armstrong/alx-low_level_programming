#include "main.h"

/**
 * _capitalize - Capitalizes a character
 * @c: character to capitalize
 *
 * Return: capitalized character
 */
char _capitalize(char c)
{
	int diff;

	if (c >= 'a' && c <= 'z')
	{
		diff = 'z' - c;
		return ('Z' - diff);
	}
	return (c);
}

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0, j = 0, separator = 0;
	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	while (*(s + i))
	{
		while (spe[j])
		{
			if (s[i] == spe[j])
			{
				if (s[i] == '\t')
					s[i] = ' ';
				++i;
				separator = 1;
				j = -1;
			}
			++j;
		}

		if ((!i || separator) && s[i])
		{
			s[i] = _capitalize(s[i]);
			separator = 0;
		}
		j = 0;
		++i;
	}
	return (s);
}


