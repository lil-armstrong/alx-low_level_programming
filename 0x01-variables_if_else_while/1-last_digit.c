#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Get length of int variable */
	int len = snprintf(NULL, 0, "%d", n);
	char message[30];

	int lastDigit = (unsigned long) abs(n % 10);
	if (lastDigit >= 0)
	{
		if (lastDigit == 0)
			strcpy(message, "0");
		if (lastDigit <= 5)
			strcpy(message, "less than 6 and not 0");
		else
			strcpy(message, "greater than 5");
	}
	printf("Last digit of %d is %d and is %s\n", n, lastDigit, message);
	return (0);
}
