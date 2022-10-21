#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal,
 * followed by a new line.
 *
 * @n: number of times the character should be printed
 */
void print_diagonal(int n)
{
	int i;

	while (n > 0)
	{
		i = n;
		while (i > 1)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		n--;
	}
	_putchar(10);
}
