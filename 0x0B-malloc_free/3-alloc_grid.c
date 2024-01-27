#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 * Return: a pointer to the 2D array; NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (height <= 1 || width <= 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
