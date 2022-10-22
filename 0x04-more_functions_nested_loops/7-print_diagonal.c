#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal,
 * followed by a new line.
 *
 * @n: number of times the character should be printed
 */
void print_diagonal(int n)
{
	int col = 0, spacing;

	if (n > 0)
	{
		while (col < n)
		{
			spacing = 0;
			while (spacing < col)
			{
				putchar(' ');
				spacing++;
			}
			_putchar('\\');
			_putchar(10);
			col++;
		}
	}
	else
		_putchar(10);
}
