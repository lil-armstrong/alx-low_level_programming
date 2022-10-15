#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define RED "\e[0;31m"
/**
 * main - main fn
 *
 * Return: void
 */
int main(void)
{
	char str1[35] = "and that place of art is useful\"";
	char str2[30] = "- Dora Korpar, 2015_10-19\n\0";
	strcat(str1, str2);

	fprintf(stderr, "%s", str1);
	return (1);
}

