#include "main.h"

int isPrime(int n, int i);
/**
 * isPrime - Checks if n a prime
 * @n: numerator
 * @i: divisor
 *
 * Return: 1 if true, else 0
 */
int isPrime(int n, int i)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (isPrime(n, i + 1));
}
/**
 * is_prime_number - checks whether a number is prime
 * @n: number to check if prime
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (isPrime(n, 2))
		return (1);
	return (0);
}
