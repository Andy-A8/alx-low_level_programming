#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list.
 * @head: The listint_t list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node of a listint_t linked list
 *	Or NULL - if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	while (node < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;

		node++;
	}

	return (head);
}
