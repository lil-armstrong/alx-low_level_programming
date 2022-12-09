#include "main.h"

/**
 * get_bit -returns the value of a bit at a given index of a binary number.
 * @n: decimal number
 * @index: index of bit
 * Return: bit (success), -1 (fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shifts;

	if (index > 64)
		return (-1);

	shifts = n >> index;

	return (shifts & 1);
}
