#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first intege4 pointer
 * @b: second integer poimter
 */

void swap_int(int *a, int *b)
{
	int *n = a;
	*a = *b;
	*b = *n;
}
