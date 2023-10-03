#include "main.h"

/**
 * free_grid - 2D array
 * @grid: The address of the 2D grid
 * @height: height of 2D array
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid[i]);
}
