#include "search_algos.h"

int _binary_search(int *array, int low, int high, int value);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *			using the Exponential search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 *	   Otherwise -1, if value is not present in array or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	int low, high;

	if (array == NULL || size < 1)
		return (-1);

	low = 0;
	high = 1;

	while (1)
	{
		if (high < (int) size)
		{
			printf("Value checked array[%d] = [%d]\n", high, array[high]);
			low = high;
			high *= 2;
		}
		else
		{
			high = size - 1;
			break;
		}
		if (array[high] >= value)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	return (_binary_search(array, low, high, value));
}

/**
 * _binary_search - Performs binary search on the array.
 *
 * @array: A pointer to the sorted subarray of integers.
 * @low: Lowest index of the subarray.
 * @high: Highest index of the subarray.
 * @value: The value to search for in the array.
 *
 * Return: The index of where value is first found in the subarray
 *	   Otherwise -1, if value was not found.
 */
int _binary_search(int *array, int low, int high, int value)
{
	int i, m;

	while (low <= high)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i < high + 1; i++)
			printf(", %d", array[i]);
		printf("\n");

		m = (high - low) / 2 + low;
		if (value == array[m])
			return (m);

		if (value > array[m])
			low = m + 1;
		else
			high = m - 1;
	}

	return (-1);
}
