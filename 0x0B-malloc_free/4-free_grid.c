#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - Frees a 2 dimensional array of integers.
 * @grid: The 2 dimensional arrays to be freed.
 * @height: The height of the grid.
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
