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

	while (*(str + i))
		++i;


	ptr = malloc(sizeof(char) * i);
	if (ptr != NULL)
	{
		i = 0;
		while (str[i] != '\0')
		{
			ptr[i] = str[i];
			++i;
		}
		return (ptr);
	}
	return (NULL);
}
