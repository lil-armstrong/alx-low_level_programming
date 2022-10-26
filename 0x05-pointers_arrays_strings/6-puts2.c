#include "main.h"

/**
 *puts2 -  prints every even character of a string,
 * starting with the first character, followed by a new line
 * @str: array pointer of type char
 *
 */

void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for(i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar(10);
}

