
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the args of your program
 * @ac: arg count
 * @av: array of args
 * Return: char* (success), NULL (fail)
 */

char *argstostr(int ac, char **av)
{

	int row = 0, count = 0, col = 0, size = (ac * 2) + 1;
	char *pt;

	if (!ac || av == NULL)
		return (NULL);


	pt = malloc(sizeof(char) * size);

	if (pt != NULL)
	{
		for (row = 0; row < ac; ++row)
		{
			col = 0;
			while (av[row][col] != '\0')
			{
				*(pt + count++) = av[row][col++];
			}
			*(pt + count++) = '\n';
		}

		return (pt);
	}

	return (NULL);
}
