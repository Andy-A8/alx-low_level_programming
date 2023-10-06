#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *		ordered from min to max, inclusive
 * @min: The minimum value of the array
 * @max: The maximum value of the array
 *
 * Return: NULL, if min > max or the function fails
 * otherwise, a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *a, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = min++;

	return (a);
}
