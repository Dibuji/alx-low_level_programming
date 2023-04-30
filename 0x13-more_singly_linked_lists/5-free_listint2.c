#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list, sets head to NULL
 * @head: pointer to a pointer to he head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		a = *head;
		*head = (*head)->next;
		free(a);
	}
	*head = NULL;
}
