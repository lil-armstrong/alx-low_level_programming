#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 *
 * Return: uppercase string
 */
char *string_toupper(char *s)
{
	int diff, i = 0;

	while (*(s + i))
	{
		if(*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			diff = ('z' - *(s + i));
			*(s + i) = (char)('Z' - diff);
		}
		i++;
	}
	return (s);
}
