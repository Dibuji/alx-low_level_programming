#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a);
	}
}
