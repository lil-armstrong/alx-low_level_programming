#include "main.h"

/**
 * print_line - draws a straight line on the terminal,
 * followed by a new line.
 *
 * @n: number of times the character should be printed
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar(10);
}
