#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return; /* Do nothing if the grid is NULL or height is zero or negative */

	for (i = 0; i < height; i++)
	{
		free(grid[i]); /* Free each row */
	}

	free(grid); /* Free the grid itself */
}

