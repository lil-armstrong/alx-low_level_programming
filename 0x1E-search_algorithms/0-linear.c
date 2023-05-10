#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 *                 the linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the index of the value in the array, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);
	/* Ádd sentinel value*/
	array[size] = value;

	while (array[index] != value)
	{
		printf("Value checked array[%zu] = [%d]\n", index, array[index]);
		index++;
	}
	/* Remove sentinel value */
	array[size] = '\0';

	if (index < size)
		return (index);

	return (-1);
}

