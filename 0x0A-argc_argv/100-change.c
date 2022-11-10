#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Main function. Prints the min number of coins
 * to make change for an amount of money
 *
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char **argv)
{
	signed int cents, result = 0, i = 0;
	int c[] = {25, 10, 5, 2, 1};
	int *coins;

	coins = c;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(*(argv + 1));
	if (cents < 0)
	{
		puts("0");
	}
	while (*(coins + i) && cents >= 0 && i < 5)
	{
		printf("coins: %d\n", *(coins+i));
		while (cents >= *(coins + i))
		{
			result++;
			cents -= *(coins + i);
			printf("result: %d, cents: %d\n", result,cents);

		}
		i++;
	}
	printf("%d\n", result);
	return (0);
}
