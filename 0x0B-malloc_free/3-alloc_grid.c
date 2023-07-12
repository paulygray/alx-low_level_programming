#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimensional array of integers
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: Memory address (Success) or NULL (Fail)
 */
int **alloc_grid(int width, int height)
{
	int x, y, z, n;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (n = 0; n < width; n++)
			grid[z][n] = 0;
	}
	return (grid);
}


















