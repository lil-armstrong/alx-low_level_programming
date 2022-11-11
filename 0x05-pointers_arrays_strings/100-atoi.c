#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _atoi - converts a string to integer
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0, j = 0, result = 0, pow = 10, negate
	= 0, digit = 0, start = -1, end = 0;

	while (s[i] != '\0')
	{
		if (i && s[i - 1] == '-')
			negate = !negate;
		if (s[i] >= '0' && s[i] <= '9')
			if (start == -1)
				start = i;
		else if (start != -1)
			break;
		++i;
	}
	end = i;


	for (i = start; i < end; ++i)
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{

			digit = (int) s[i] - 48;
			j = end - i;
			pow = 1;
			while (--j)
				pow *= 10;
			result += (digit * pow);
		}
	}
	return (negate ? -result : result);
}
