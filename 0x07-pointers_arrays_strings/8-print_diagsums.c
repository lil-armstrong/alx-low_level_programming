#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: array of integers
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0;
	long lsum = 0, rsum = 0;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			/** Left diagonal calculation */
			if (i == j)
				lsum += *(a + (size * i + j));

			/** Right diagonal calculation */
			if (j == (size - 1) - i)
				rsum += *(a + (size * i + ((size - 1) - i)));
		}
	}
	printf("%d, %d\n", lsum, rsum);
}
