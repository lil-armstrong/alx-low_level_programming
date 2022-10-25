#include "main.h"

/**
 * rev_string - reverses a string in place
 * @str: array pointer of type char
 *
 */

void rev_string(char *s)
{
	int left = 0, right = 0;
	char temp;

	/* Get the length of the string*/
	while (*(s + right))
	{
		right++;
	}

	while (right > left)
	{
		--right;
		temp = *(s + right);
		*(s + right) = *(s + left);
		*(s + left) = temp;
		left++;
	}
}

