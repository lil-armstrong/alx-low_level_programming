#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: void
 */
int main(void)
{
	int i = 0;
	int remainder;

	while (i < 16)
	{
		remainder = i % 16;
		if (remainder < 10)
			putchar(48 + remainder);
		else
			putchar(87 + remainder);
		++i;
	}
	putchar(10);
	return (0);
}
