#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *	       using the jump search algorithm
 * @list: A pointer to the head of the list to search in
 * @size: The number of nodes in list
 * @value: The value to search for
 *
 * Return: A pointer to the first node where value is located
 *	   Otherwise NULL, if value is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i, low_i, high_i;
	listint_t *low, *high;

	if (list == NULL || size < 1)
		return (NULL);

	step = sqrt(size);
	low = list;
	high = list;
	for (i = 0; i < step; i++)
		high = high->next;
	low_i = 0;
	high_i = step;

	while (1)
	{
		printf("Value checked at index [%lu] = [%d]\n", high_i, high->n);
		if (high->n >= value || high_i == size - 1)
			break;
		low = high;
		for (i = 0; i < step && high->next != NULL; i++)
			high = high->next;
		low_i = high_i;
		high_i += step;
		if (high_i >= size)
			high_i = size - 1;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low_i, high_i);

	for (; low_i < high_i + 1 && low_i < size; low_i++, low = low->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", low_i, low->n);
		if (low->n == value)
			return (low);
	}

	return (NULL);
}
