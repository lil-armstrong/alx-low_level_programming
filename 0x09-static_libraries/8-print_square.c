#include "main.h"

/**
 * print_square - draws a square using # on the terminal,
 * followed by a new line.
 *
 * @n: number of times the character should be printed
 */
void print_square(int n)
{
	int row = 0, col;

	if (n > 0)
	{
		while (row < n)
		{
			col = 0;
			while (col < n)
			{
				_putchar('#');
				col++;
			}
			_putchar(10);
			row++;
		}
	}
	else
		_putchar(10);
}
