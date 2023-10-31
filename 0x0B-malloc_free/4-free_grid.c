#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: 2nd grid
 * @height: height dimension of the grid
 * Description: frees memory of  the grid
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);

}
