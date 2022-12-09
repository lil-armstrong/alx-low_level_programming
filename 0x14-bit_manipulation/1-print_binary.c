#include "main.h"

#define ON 1
#define OFF 0
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int c, result, state = OFF;

	for (c = 31; c >= 0; --c)
	{
		result = n >> c;

		if (result & 1)
		{
			if (!state)
				state = ON;
			_putchar('1');
		}
		else if (state || !state && c == 0)
			_putchar('0');
	}

	_putchar(10);
}
