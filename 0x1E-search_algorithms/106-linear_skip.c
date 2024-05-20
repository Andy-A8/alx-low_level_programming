#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: A pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located
 *	   Otherwise NULL, if value is not present in head or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *low, *high;

	if (list == NULL)
		return (NULL);

	low = list;
	high = list->express;

	while (1)
	{
		if (high->next == NULL)
			break;
		printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
		if (high->n >= value)
			break;
		low = high;
		high = high->express;
		if (high == NULL)
		{
			high = low;
			while (high->next != NULL)
				high = high->next;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			low->index, high->index);

	for (i = low->index; i < high->index + 1; i++, low = low->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
	}

	return (NULL);
}
