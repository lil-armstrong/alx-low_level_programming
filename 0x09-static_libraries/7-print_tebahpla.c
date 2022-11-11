#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: void
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c--);
	}
	putchar(10);
	return (0);
}
