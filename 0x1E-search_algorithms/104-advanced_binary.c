#include "search_algos.h"

int binary_helper(int *array, int lo, int hi, int value);

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

	return (binary_helper(array, 0, size - 1, value));
}

/**
 * binary_helper - A recursive function to handle binary search.
 *
 * @array: A pointer to the first element of the sorted subarray of integers.
 * @low: The lowest index of the subarray.
 * @high: The highest index of the subarray.
 * @value: The value to search for in the array.
 *
 * Return: The first index where value is located
 *	   Otherwise -1, if value is not present in array or if array is NULL.
 */
int binary_helper(int *array, int low, int high, int value)
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
		return (binary_helper(array, m + 1, high, value));
	else
		return (binary_helper(array, low, m, value));
}
