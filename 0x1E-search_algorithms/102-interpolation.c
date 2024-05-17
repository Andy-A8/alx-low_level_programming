#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *		 using the Interpolation search algorithm.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 *	   Otherwise -1, if value is not present in array or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos, low, high;

	if (array == NULL || size < 1)
		return (-1);

	low = 0;
	high = size - 1;

	while ((array[high] != array[low]) && array[low] < value)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos >= (int) size)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] = [%d]\n", low, array[low]);
	if (value == array[low])
		return (low);
	else
		return (-1);
}
