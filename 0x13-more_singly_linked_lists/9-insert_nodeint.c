#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: The listint_t list.
 * @idx: The index of the list where the new node should be added
 *	- index starts at 0.
 * @n: The integer for the new node.
 *
 * Return: The address of the new node
 *	Or NULL - if the function fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;

	return (new);
}
