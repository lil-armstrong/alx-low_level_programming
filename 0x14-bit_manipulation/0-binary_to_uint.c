#include "main.h"

int binary_strlen(const char *);
long int _pow(int i, int e);
int char_to_num(char c);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: NULL terminated character string
 * Return: converted number (success), 0 (fail)
 */
unsigned int binary_to_uint(const char *b)
{
	const int len = binary_strlen(b);
	int i = len, result = 0;

	if (b != NULL && len != -1)
	{
		while (i > 0)
		{
			result += char_to_num(b[i - 1]) * _pow(2, len - i);
			--i;
		}
		return (result);
	}
	return (0);
}

/**
 * char_to_num - converts a char to number
 * @c: character
 * Return: int
 */
int char_to_num(char c)
{
	return (((int) c) - 48);
}

/**
 * _pow - calculates the power of i
 * @i: number to get power of
 * @e: raise power count
 * Return: int
 */
long int _pow(int i, int e)
{
	if (e == 0)
		return (1);

	return (i * _pow(i, --e));
}

/**
 * binary_strlen - gets length of valid binary string
 * @c: NULL terminated character string
 * Return: length of string
 */
int binary_strlen(const char *c)
{
	int len = 0;

	while (c[len] != '\0')
	{
		if (c[len] != '0' && c[len] != '1')
			return (-1);
		len++;
	}
	return (len);
}
