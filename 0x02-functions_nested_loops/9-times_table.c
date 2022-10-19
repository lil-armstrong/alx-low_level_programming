#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int n = 0, m = 0, o;

	while (m <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			o = m * n;
			if (n > 0 && n < 9)
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
				_putchar(' ');
			}
			_putchar((o % 10) + '0');
			n++;
		}
		_putchar(10);
		m++;
	}
}
