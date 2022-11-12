#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of grid
 * @height: heihgt of grid
 * Return: NULL(fail), int **ptr(success)
 */
int **alloc_grid(int width, int height)
{
	int row, col, **grid;

	if (width > 0 && height > 0)
	{
		grid = (int **) malloc(sizeof(int) * height);

		if (grid != NULL)
		{
			row = 0;
			while (row < height)
			{
				grid[row] = malloc(sizeof(int) * width);

				if (grid[row] == NULL)
				{
					col = 0;
			/** Free memory of already allocated rows*/
					while (col < row)
					{
						free(grid[col]);
						++col;
					}
					/** Freee grid*/
					free(grid);
					return (NULL);
				}
				++row;
			}
			return (grid);
		}
	}
	return (NULL);
}
