#include "main.h"

/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: array pointer of type char
 *
 * Return: int
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar(10);
	return (n);
}

