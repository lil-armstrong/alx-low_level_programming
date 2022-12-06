#include "main.h"

/**
 * _putchar - Print a char to STDIN
 * @c: character to print
 */
void _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}
