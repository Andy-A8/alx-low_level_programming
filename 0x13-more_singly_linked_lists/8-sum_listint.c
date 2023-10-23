#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sums all of the data (n) of a listint_t linked list.
 * @head: The listint_t linked list.
 *
 * Return: The sum of all the data (n)
 *	Or 0 - if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
