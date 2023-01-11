#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: the grid to be freed
 * @height: height of the grid
 * Return: 0 success
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
