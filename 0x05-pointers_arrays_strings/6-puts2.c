#include "main.h"

/**
 *put2 -  prints every even character of a string,
 * starting with the first character, followed by a new line
 * @str: array pointer of type char
 *
 */

void put2(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		_putchar(*(str + n));
		n+2;
	}
	_putchar(10);
}

