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
/**
 *_strlen - returns length of a string..
 * @s: array pointer of type char
 *
 * Return: int
 */

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n))
		n++;

	return (n);
}
/**
 *_puts - prints a string, followed by a new line, to stdout.
 * @str: array pointer of type char
 *
 * Return: int
 */

void _puts(char *str)
{
	int n = 0;

	while (*(str + n))
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar(10);
}
/**
 * _strcpy - copy string from src to dest
 * @dest: ded0stination buffer pointer
 * @src: source string pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * _atoi - converts a string to integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int i = 0, j = 0, pow = 10, negate = 0, digit = 0, start = -1, end = 0;

	while (s[i] != '\0')
	{
		if (i && s[i - 1] == '-')
			negate = !negate;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (start == -1)
				start = i;
		}
		else if (start != -1)
			break;
		++i;
	}
	end = i;

	for (i = start; i < end; ++i)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{

			digit = (int)s[i] - 48;
			j = end - i;
			pow = 1;
			while (--j)
				pow *= 10;
			result += (digit * pow);
		}
	}
	return (negate ? -result : result);
}
