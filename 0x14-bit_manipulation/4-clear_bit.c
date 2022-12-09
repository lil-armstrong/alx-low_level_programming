
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number to modify bit
 * @index: index position to clear bit
 * Return: 1 (success), -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 >> index;

	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
