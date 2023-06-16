#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
