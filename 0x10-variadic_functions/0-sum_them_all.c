#include "variadic_functions"
/**
 * sum_them_all - sums all its parameters
 * @n: nunber of arguments
 * Return: sum of all int args supplied
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(al, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(al, int);
	}
	va_end(al);
	return (sum);
}
