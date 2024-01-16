#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two dimensional grid
 * @grid: input
 * @height: input
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
