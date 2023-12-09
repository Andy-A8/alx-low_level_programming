#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Identify the nth node of a dlistint_t linked list.
 * @head: The head of the list.
 * @index: the nth node to identify.
 *
 * Return: The address of the identified node,
 *	Or NULL - if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
