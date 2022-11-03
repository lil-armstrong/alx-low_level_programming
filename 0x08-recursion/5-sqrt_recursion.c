#include "main.h"

int repeatSubtraction(int n, int odd, int count);
/**
 * repeatSubtraction - repeatedly subtracts incremental
 * odd values from n while counting each iteration
 * @n: number to subtract from
 * @odd: odd offset
 * @count: recursion count
 *
 * Return: count if diff is 0, otherwise -1
 */
int repeatSubtraction(int n, int odd, int count)
{
	int diff = n - odd;

	if (!diff)
		return (count);
	else if (diff > 0)
		return (repeatSubtraction(diff, odd + 2, ++count));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: radicand
 *
 * Return: -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (repeatSubtraction(n, 1, 1));
}
