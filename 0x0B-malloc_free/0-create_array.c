#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size:  size of the array
 * @c: special charater to initialize the array with
 * Return: *char (success), NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size)
	{
		ptr = malloc(sizeof(char)  * size);
		*ptr = c;
		return (ptr);
	}
	return (NULL);
}
