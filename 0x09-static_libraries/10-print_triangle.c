#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal,using #
 * followed by a new line.
 *
 * @n: number of times the character should be printed
 */
void print_triangle(int n)
{
	int row = 1, col;

	if (n > 0)
	{
		while (row <= n)
		{
			col = 1;
			while (col <= n)
			{
				if (col > (n - row))
					_putchar('#');
				else
					_putchar(' ');
				col++;
			}
			_putchar(10);
			row++;
		}
	}
	else
		_putchar(10);
}
