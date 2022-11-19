#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: array of actions
 * @size: size of array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
