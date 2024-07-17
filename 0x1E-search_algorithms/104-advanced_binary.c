#include "search_algos.h"

int _binary_helper(int *array, int low, int high, int value);

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 *	   Otherwise -1, if value is not present in array or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size < 1)
		return (-1);
	return (_binary_helper(array, 0, size - 1, value));
}

/**
 * _binary_helper - Performs binary search on the array.
 *
 * @array: A pointer to the sorted subarray of integers.
 * @low: Lowest index of the subarray.
 * @high: Highest index of the subarray.
 * @value: The value to search for in the array.
 *
 * Return: The index of where value is first found in the subarray
 *	   Otherwise -1, if value was not found.
 */
int _binary_helper(int *array, int low, int high, int value)
{
	int i, m;

	if (low > high)
		return (-1);

	printf("Searching in array: %d", array[low]);
	for (i = low + 1; i < high + 1; i++)
		printf(", %d", array[i]);
	printf("\n");

	if (array[low] == value)
		return (low);

	m = (high - low) / 2 + low;

	if (value > array[m])
		return (_binary_helper(array, m + 1, high, value));
	else
		return (_binary_helper(array, low, m, value));
}
