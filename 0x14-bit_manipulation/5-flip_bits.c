#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of flips (success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = (n ^ m), count = 0;

	while (bits)
	{
		++count;
		bits &= (bits - 1);
	}
	return (count);
}
