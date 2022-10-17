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

	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (j <= '9' && i < '8' )
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
