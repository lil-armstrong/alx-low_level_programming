#include "main.h"

/**
 * puts_half - prints half charaters of a string
 * @str: array pointer of type char
 *
 */

void puts_half(char *str)
{
	int left = 0, right = 0;

	/* Get the length of the string*/
	while (*(str + right))
	{
		right++;
	}

	while (right > left)
	{
		--right;
		_putchar(*(str + left));
		left++;
	}
}

