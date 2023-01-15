#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: the grid to free
 * @height: grid height to clear
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
