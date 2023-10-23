#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * head: The listint_t list to be freed.
 *
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
