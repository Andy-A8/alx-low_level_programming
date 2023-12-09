#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Sums of all the data of a dlistint_t linked list.
 * *head: The head of the list.
 *
 * Return: The sum of all the data - if function succeeds,
 *	Or 0 - If the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_total = 0;

	while (head)
	{
		sum_total += head->n;
		head = head->next;
	}

	return (sum_total);
}
