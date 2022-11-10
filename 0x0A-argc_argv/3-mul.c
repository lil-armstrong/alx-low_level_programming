#include  <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Main function
 *
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: 0 always if successful
 */
int main(int argc, char **argv)
{
	int mul;

	mul = 1;
	if (argc - 1 == 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mul);
	return (0);
}
