#include "main.h"

/**
 * rev_string - reverses a string in place
 * @str: array pointer of type char
 *
 */

void rev_string(char *s)
{
	int start = 0, len = 0;
	char temp;

	while (*(str + len)
	{
		len++;
	}

	while (len != start)
	{
		--len;
		temp = *(s + len);
		*(s + len) = *(s + start);
		*(s + start) = temp;
		start++;
	}
}

