#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of
 *               integers.
 * @width: The width of the 2 dimensional array.
 * @height: The height of the 2 dimensional array.
 *
 * Return: NULL, if width <= 0, height <= 0, or the function fails.
 *         Otherwise, a pointer to the 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **TD;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	TD = malloc(sizeof(int *) * height);

	if (TD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		TD[i] = malloc(sizeof(int) * width);

		if (TD[i] == NULL)
		{
			for (; i >= 0; i--)
				free(TD[i]);

			free(TD);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			TD[i][j] = 0;
	}

	return (TD);
}
