#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: grid
 * @height: row to free
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	if (grid == NULL || !height)
		return;

	while (row < height)
	{
		free(grid[row]);
		++row;
	}
	free(grid);
}
