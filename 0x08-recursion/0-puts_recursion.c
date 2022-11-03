#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: pointer to array of characters to print
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\0');
	else
	{
		_putchar(*s);
		_puts_recursion((s + 1));
	}
}
