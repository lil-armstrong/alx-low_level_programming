#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string in memory
 * @str: string to duplicate
 * Return: char* (success), NULL (fail)
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	while (*(ptr + i))
		++i;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * i);
	if (ptr != NULL)
	{
		while (i)
		{
			ptr[--i] = str[i];
		}
		return (ptr);
	}
	return (NULL);
}
