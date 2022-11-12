
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * length_with_word_count - Counts a string character and words
 * separated by a specified separator character
 * @str: string pointer
 * @sep: separator character
 * Return: [length_of_string, word_count]
 */
int *length_with_word_count(char *str, char sep)
{
	int w = 0, len = 0, flag = 0, arr[2];
	int *result = arr;

	while (str[len] != '\0')
	{
		if (str[len] == sep)
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
		len++;
	}

	result[0] = len;
	result[1] = w;

	return (result);
}
/**
 * strtow - splits string to words
 * @str: pointer to string
 * Return: NULL(fail), char*(success)
 */
char **strtow(char *str)
{
	int row = 0, col = 0, len = 0, word_count = 0, j, words = 0, *count;
	char **pt;

	if (str == NULL)
		return (NULL);

	count = length_with_word_count(str, ' ');
	len = count[0];
	words = count[1];

	pt = (char **) malloc(sizeof(char *) * (words));
	while (pt != NULL && len && col < len)
	{
		word_count = 0;
		while (str[col + word_count] != ' ')
			word_count++;

		if (word_count)
		{
			pt[row] = malloc(sizeof(char) * word_count);
			if (pt[row] == NULL)
			{
				j = col;
				while (--j)
				{
					free(pt[j]);
				}
				free(pt);
			}
			j = 0;
			while (word_count--)
				pt[row][j++] = str[col++];
			++row;
		}
		else
			col++;
	}
	return (row ? pt : NULL);
}
