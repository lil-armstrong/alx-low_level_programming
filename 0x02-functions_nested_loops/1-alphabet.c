#include "main.h"

/**
 * print_alphabet_0 - Main function
 *
 * Description: prints lowercase alphabets, followed by a newline
 * Return: 0
 */

void print_alphabet(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar(10);
}
