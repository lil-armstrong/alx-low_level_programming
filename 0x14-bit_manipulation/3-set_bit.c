
#include "main.h"
#define ON 1
#define OFF 0

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: decimal number
 * @index: index position to set bit
 * Return: 1 (success), -1 (fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index > 64)
		return (-1);

	*n = ((*n & ~mask) | (1 << index));

	return (1);
}

