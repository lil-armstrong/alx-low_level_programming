
#include "main.h"
#define ON 1
#define OFF 0

char *decimal_to_binary();

/**
 * get_bit -returns the value of a bit at a given index of a binary number.
 * @n: decimal number
 * @index: index of bit
 * Return: bit (success), -1 (fail)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *bin_string = decimal_to_binary(n);
	char bit;

	if (bin_string != NULL)
	{
		bit = bin_string[31 - index];
		free(bin_string);
		return (bit - 48);
	}
	return (-1);
}

/**
 * decimal_to_binary - converts decimal number to binary string
 * @dec: decimal number
 * Return: binary string (success), NULL (fail)
 */
char *decimal_to_binary(int dec)
{
	char *bin_char = malloc(sizeof(char) * 32);
	int c, len = 0, result, state = OFF;

	if (bin_char != NULL)
	{
		for (c = 31; c >= 0; --c)
		{
			result = dec >> c;

			if (result & 1)
			{
				if (!state)
					state = ON;
				bin_char[len++] = '1';
			}
			else
				bin_char[len++] = '0';
		}
		bin_char[len] = '\0';

		return (bin_char);
	}
	return (NULL);
}
