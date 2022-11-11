#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k;

	i = '0';

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i <= '9' - 3)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
