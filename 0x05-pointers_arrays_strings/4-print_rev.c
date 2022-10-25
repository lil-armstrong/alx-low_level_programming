#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout.
 * @str: array pointer of type char
 *
 */

void print_rev(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		n++;
	}

	while (n >= 0)
	{
		_putchar(str[n]);
		--n;
	}
	_putchar(10);
}

