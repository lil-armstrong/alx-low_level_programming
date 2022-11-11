#include <stdio.h>

/**
  * main - Main entry function
  *
  * Description: Main entry function of the program
  * Return: void
  */
int main(void)
{
	int i;
	unsigned long int li;
	unsigned long int lli;
	float f;
	char c;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
