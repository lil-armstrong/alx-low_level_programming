#include "main.h"

/**
 * puts_half - prints second half of a string.
 * Prints the first of the second half if the string length is odd
 * @str: array pointer of type char
 *
 */

void puts_half(char *str)
{
	int i, len = 0;

	/* Get the length of the string*/
	while (str[len] != '\0')
	{
		len++;
	}
	i = len / 2;
	if (len % 2 != 0)
		i = len - (len - 1) / 2;

	while (i < len)
	{
		_putchar(str[i++]);
	}
	_putchar(10);
}

