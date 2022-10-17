#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i++);
		if (i <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
