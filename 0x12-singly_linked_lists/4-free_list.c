#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: beginning of node
 */

void free_list(list_t *head)
{
	list_t *a;

	while (head != NULL)
	{
		a = head;
		head = head->next;
		free(a->str);
		free(a);
	}
}
