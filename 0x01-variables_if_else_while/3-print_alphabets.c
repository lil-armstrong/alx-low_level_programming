#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 *
 * Return: void
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	c = 'A';
	while (c <= 'Z')
	{
        	putchar(c);
                c += 1;
	}
	putchar('\n');
	return (0);
}
