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
	int i = 0, separator = 0;

	while (*(s + i))
	{
		if (*(s + i) == ',' || *(s + i) == ';' || *(s + i) == ' '
			|| *(s + i) == '.' || *(s + i) == '!'
			|| *(s + i) == '?' || *(s + i) == '"'
			|| *(s + i) == '(' || *(s + i) == ')'
			|| *(s + i) == '{' || *(s + i) == '}'
			|| *(s + i) == '\t' || *(s + i) == '\n')
		{
			if (*(s + i) == '\t')
				s[i] = ' ';
			i++;
			continue;
		}
		if ((!i || separator) && *(s + i))
			s[i] = _capitalize(*(s + i));
		separator = 0;
		++i;
	}
	return (s);
}


