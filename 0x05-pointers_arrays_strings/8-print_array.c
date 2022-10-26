#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints every even character of a string,
 * starting with the first character, followed by a new line
 * @a: array pointer of type char
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	putchar(10);
}

