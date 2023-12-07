#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list..
 * @head: The head of the list.
 *
 * Return: Always 0.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
