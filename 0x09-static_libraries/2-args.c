#include  <stdio.h>

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
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
