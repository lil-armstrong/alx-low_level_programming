#include "main.h"

/**
 * puts_half - prints second half of a string.
 * Prints the first of the second half if the string length is odd
 * @str: array pointer of type char
 *
 */

void puts_half(char *str)
{
	int left = 0, right = 0;

	/* Get the length of the string*/
	while (*(str + right))
	{
	 	if(*(str + right) == '\0')
			break;
		right++;
	}

	if ((left - 1) / 2)
		_putchar(*(str + ((left - 1)/2)));

	while (right > left)
	{
		--right;
		_putchar(*(str + right));
		left++;
	}
}
