i#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry function
 *
 * Description: The main entry function
 * Return: void
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive.\n", n);
	else
		printf("%d is negative.\n", n)
	return (0);
}
