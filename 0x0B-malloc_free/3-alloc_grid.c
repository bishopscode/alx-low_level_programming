#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2-dimensional grid of integers.
 * @width: The width (number of columns) of the grid.
 * @height: The height (number of rows) of the grid.
 *
 * Return: A ptr to the newly allocated 2-dimensional grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL); /* Return NULL if width or height is 0 or negative */

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL); /* Return NULL if memory allocation fails */

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
	/*If memory allocation fails for any row, free previous rows and return NULL*/
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0; /* Initialize each element to 0 */
	}

	return (grid); /* Return a pointer to the 2-dimensional grid */
}

