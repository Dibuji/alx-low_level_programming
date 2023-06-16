#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data
 * @head: head of list
 * Return: sum, or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum;

	if (head == NULL)
		return (0);

	sum = current->n;
	while (current->next != NULL)
	{
		sum += current->next->n;
		current = current->next;
	}
	return (sum);
}
