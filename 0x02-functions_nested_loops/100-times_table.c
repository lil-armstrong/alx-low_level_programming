#include "main.h"

/**
 * print_times_table - prints n times table, starting with 0
 * @b - time table to print
 */
void print_times_table(int p)
{
	int n = 0, m = 0, o;

	while (m <= p && p < 15 && p >= 0)
	{
		n = 0;
		while (n <= p)
		{
			o = m * n;
			if (n > 0 && n <= 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (o > 9)
			{
				_putchar((o / 10) + '0');
			}
			else
			{
				if (n > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar((o % 10) + '0');
			n++;
		}
		_putchar(10);
		m++;
	}
}
