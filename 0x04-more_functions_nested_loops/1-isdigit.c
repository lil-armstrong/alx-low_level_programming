#include "main.h"

/**
 * _isdigit - function checks for a digit (0 through 9).
 *
 * @c: character
 * Return: 1 if uppercase, 0 otherwise
 */
int _isdigit(int c)
{
/*int a = 97, z = a + 6, A = 65, Z = A + 26;*/

	if (c >= 48 && c <= 48 + 9)
		return (1);

	return (0);
}
