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
int main(int argc __attribute__((unused)), char **argv)
{
	int result, arg;

	result = 0;

	while (*(++argv))
	{
		arg = atoi(*argv);
		if (arg)
		{
			result += arg;
		}
		else
		{
			puts("Error");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
