#include "main.h"

/**
 *puts2 -  prints every even character of a string,
 * starting with the first character, followed by a new line
 * @str: array pointer of type char
 *
 */

void puts2(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n+=2;
	}
	_putchar(10);
}

