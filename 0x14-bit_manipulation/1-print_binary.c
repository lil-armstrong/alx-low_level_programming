
#include "main.h"

#define ON 1
#define OFF 0
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int shifts;
	unsigned long int temp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (temp = n, shifts = 0; (temp >>= 1); shifts++)
		;

	for (; shifts >= 0; --shifts)
	{

		if ((n >> shifts) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
