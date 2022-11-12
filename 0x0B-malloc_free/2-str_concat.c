#include <stddef.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first source string
 * @s2: second source string
 * Return: NULL (fail), char * (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0;

	while (s1 != NULL && *(s1 + i))
	{
		++i;
	}
	while (s2 != NULL && *(s2 + j))
	{
		++j;
	}

	ptr = malloc(sizeof(char) + (i + j ? i + j : 1));
	if (ptr != NULL)
	{
		i = 0, j = 0;
		while (s1 != NULL && *(s1 + i))
		{
			ptr[i] = s1[i];
			++i;
		}
		while (s2 != NULL && *(s2 + j))
		{
			ptr[j] = s2[j];
			++j;
		}
		return (ptr);
	}

	return (NULL);
}
