#include <stdio.h>

/**
 * isMultiple - Checks whether n is a multiple of m
 * @n: the integer to check
 * @m: thr multiplier
 *
 * Return: integer
 */
int isMultiple(int n, int m)
{
	return (n % m == 0);
}

/**
 * main - Program main function
 *
 * Return: Always(0)
 */
int main(void)
{
	int count = 1, limit = 100, m3, m5;

	while (count <= limit)
	{
		m3 = isMultiple(count, 3);
		m5 = isMultiple(count, 5);

		if (m3 && m5)
		{
			printf("%s", "FizzBuzz");
		}
		else if (m3)
		{
			printf("%s", "Fizz");
		}
		else if (m5)
		{
			printf("%s", "Buzz");
		}
		else
			printf("%d", count);
		if (count < limit)
			printf(" ");
		count++;
	}
	printf("\n");

	return (0);
}
