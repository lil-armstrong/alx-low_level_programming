#include "function_pointers.h"

/**
 * int_index - finds an integer
 * @array: array of numbers
 * @size: size of array
 * @cmp: function pointer to compare integer
 * Return: index (success), -1 (fail)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
