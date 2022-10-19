#include "main.h"

/**
 * print_alphabet_x10 - Main function
 *
 * Description: prints lowercase alphabets 10 times, followed by a newline
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int c = 'a', i = 1;
	while (i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c++);
		}
		i++;
	}
	_putchar(10);
}
