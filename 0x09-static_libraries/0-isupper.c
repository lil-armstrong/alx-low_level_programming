#include "main.h"

/**
 * _isupper - function checks for uppercase character.
 *
 * @c: character
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
/*int a = 97, z = a + 6, A = 65, Z = A + 26;*/

	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
