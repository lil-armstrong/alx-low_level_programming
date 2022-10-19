#include "main.h"

/**
 * main - Main function
 *
 * Description: prints lowercase alphabets, followed by a newline
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int c = 'a', i = 1;
	while (++i <= 10)
	{
		while (c <= 'z')
		{
			_putchar(c++);
		}
	}
	_putchar(10);
}
