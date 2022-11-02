#include "main.h"

/**
 * *_strstr -  finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: string to search string from
 * @needle: string to search for
 * Return: pointer to the beginning of the located substring, or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	int found, j;

	while (*haystack)
	{
		found = 0;
		for (j = 0; *(needle + j); ++j)
		{
			if (*(haystack + j) != *(needle + j))
			{
				found = 0;
				break;
			}
			found = 1;
		}

		if (found)
			return (haystack);
		haystack++;
	}

	return (NULL);
}
