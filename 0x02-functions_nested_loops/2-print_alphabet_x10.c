#include "main.h"

/**
 * print_alphabet_x10 - Main function
 *
 * Description: prints lowercase alphabets 10 times, followed by a newline
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 1, c;
	
	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c++);
		}
		i++;
	}
	_putchar(10);
}
