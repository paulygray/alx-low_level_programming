#include <stdlib.h>

/**
 * free_grid - free two-dimensional grid created by 3-alloc_grid function
 *
 * @grid: double pointer to grid
 * @height: height of grid
 *
 * Return: Memory address (grid)
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
