#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * created by my alloc_grid function
 *
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL)
	{
		return;
	}
	for (int i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
		}
	}
	free(grid);
}
