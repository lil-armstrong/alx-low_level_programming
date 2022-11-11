#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	i = '0';

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i <= '9' - 2)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
