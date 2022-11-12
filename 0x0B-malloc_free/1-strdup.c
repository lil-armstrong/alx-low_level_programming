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

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(*str));
	if (ptr != NULL)
	{
		while (*(str + i))
		{
			*(ptr + i) = *(str + i);
			++i;
		}
		return (ptr);
	}
	return (NULL);
}
