#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *		   using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located
 *	   Otherwise, if value is not present in array or if array is NULL, -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	if (array == NULL || size < 1)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i < high + 1; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = (high - low) / 2 + low;
		if (value == array[mid])
			return (mid);

		if (value > array[mid])
			low = mid + 1;
		else

			high = mid - 1;
	}

	return (-1);
}
