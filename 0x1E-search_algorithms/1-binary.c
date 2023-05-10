#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: input array sorted in ascending order
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1;
	int m;
	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		m = floor((left + right) / 2);
		printf("Searching in array: ");
		print_array(array, left, right);
		if (array[m] > value)
			right = m - 1;
		else if (array[m] < value)
			left = m + 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * print_array - Print the array using printf in a more
 * readable fashion
 * @array: input array
 * @size: size of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t index = start;
	for (; index <= end; ++index)
	{

		printf("%d", array[index]);
		if (index < end)
			printf(", ");
	}

	printf("\n");
}
