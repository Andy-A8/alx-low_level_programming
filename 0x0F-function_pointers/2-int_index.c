#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - A function that searches for an integer.
 * @array: The array.
 * @size: The size of the array.
 * @cmp: A pointer to the function to be used to compare values.
 *
 * Return: The index of the first element for
 *	which the cmp function does not return 0.
 *	Otherwise if size <= 0, or no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
