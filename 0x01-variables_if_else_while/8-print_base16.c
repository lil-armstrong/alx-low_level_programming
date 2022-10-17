#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: void
 */
int main(void)
{
	char c = '1';

	while (c <= '9')
	{
		putchar(c++);
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c++);
	}
	putchar(10);
	return (0);
}
