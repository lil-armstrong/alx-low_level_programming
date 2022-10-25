#include "main.h"

/** _strlen - returns length of a string..
 * @s: array pointer of type char
 *
 * Return: int
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s+n))
		n++;

	return(n);
}
