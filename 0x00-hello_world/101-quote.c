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
	fwrite(str1, (size_t) str1, 1, stderr);
	return (1);
}

