#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - main fn
 *
 * Return: void
 */
int main(void)
{
	char str1[65] = "and that place of art is useful\" - Dora Korpar, 2015-10-19";

	str1[strlen(str1)] = '\n';
	write(2, str1, strlen(str1));
	exit (1);
}

