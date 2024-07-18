#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 *		   using the linear search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 *	   Otherwise, if the value is not present or the array is NULL, -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || size < 1)
		return (-1);

	for (i = 0; i < (int) size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
