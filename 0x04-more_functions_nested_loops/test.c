#include <stdio.h>

void main (void)
{
	int c = 'B';

	printf ("%c: %d\n", c, c >= 'A' && c <= 'Z' ? 1 : 0);
}
