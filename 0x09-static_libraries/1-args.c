#include  <stdio.h>
/**
 * main - Main function
 *
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: 0 always if successful
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
