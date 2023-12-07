#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Gets the number of elements in a linked dlistint_t list.
 * @h: Head of the list.
 *
 * Return: The number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
