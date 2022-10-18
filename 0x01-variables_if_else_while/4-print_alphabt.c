#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: void
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if(i != 'q' || i != 'e')
			putchar(i);
		i += 1;
	}
	putchar(10);
	return (0);
}
