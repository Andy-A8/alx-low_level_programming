#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function given as a parameter
 *		on each element of an array.
 * @array: The array.
 * @size: The size of the array.
 * @action: A pointer to the function you need to use.
 *
 * Return: Always 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
