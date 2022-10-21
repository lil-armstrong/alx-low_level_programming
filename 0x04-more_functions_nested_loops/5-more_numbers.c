#include "main.h"
/**
 * more_numbers - prints the numbers, from 0 to 14, ten times
 * followed by a new line.
 *
 */
void more_numbers(void)
{
	int n, i, c;


	n = '0';
	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
				_putchar(n + i);
			i++;
		}
		_putchar(10);
		c++;
	}
}
