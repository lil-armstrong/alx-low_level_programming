#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: Number to find factorial value for
 * Return: factorial of n.
 * n < 0 returns -1
 * 0 returns 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	{
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
