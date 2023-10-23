#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Gets the number of elements in a linked listint_t list.
 * @h: The listint_t list.
 *
 * Return: The number of elements in a linked listint_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}

	return (nodes);
}
