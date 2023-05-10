#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	array[size] = value;

	while (array[i] == value)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		i++;
	}
	array[size] = '\0';

	if (i < size)
		return (i);

	return (-1);
}
