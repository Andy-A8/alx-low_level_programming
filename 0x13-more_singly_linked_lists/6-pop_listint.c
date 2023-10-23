#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: 0 - if the linked list is empty
 *	Or the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (i);
}
