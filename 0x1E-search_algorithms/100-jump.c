#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 *		 using the Jump search algorithm. The square root of the size
 *		 of the array as the jump step.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 *	   Otherwise -1, if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t sqr, low, high;

	if (array == NULL || size < 1)
		return (-1);

	sqr = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += sqr)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low < high + 1 && low < size; low++)
	{
		printf("Value checked array [%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
