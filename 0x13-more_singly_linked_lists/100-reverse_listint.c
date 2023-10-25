#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: The listint_t linked list.
 *
 * Return: A pointer to the first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *lead, *follow;

	if (head == NULL || *head == NULL)
		return (NULL);

	follow = NULL;

	while ((*head)->next != NULL)
	{
		lead = (*head)->next;
		(*head)->next = follow;
		follow = *head;
		*head = lead;
	}

	(*head)->next = follow;

	return (*head);
}
