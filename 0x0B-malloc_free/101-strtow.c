#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - splits string to words
 * @str: pointer to string
 * Return: NULL(fail), char*(success)
 */
char **strtow(char *str)
{
	int row = 0, col = 0, len = 0, tlen = 0, j, rlen = 0;
	char **pt;

	if (!str || str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		if (str[rlen] != ' ')
			len++;
		rlen++;
	}
	pt = (char **) malloc(sizeof(char *) * len + 1);
	while (col < rlen)
	{
		tlen = 0;
		while (str[col + tlen] != ' ')
			tlen++;
		if (tlen)
		{
			pt[row] = malloc(sizeof(char) * tlen);
			if (pt[row] == NULL)
			{
				j = col;
				while (--j)
					free(pt[j]);
				free(pt);
			}
			j = 0;
			while (tlen--)
				pt[row][j++] = str[col++];
			++row;
		}
		else
			col++;
	}
	pt[row] = NULL;
	return (pt);
}
