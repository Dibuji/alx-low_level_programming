#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index 'index' of a linked list
 * @head: pointer to pointer to firt node
 * @index: index of node to be deleted
 * Return: 1, if success or -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *prev;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	prev = *head;
	current = (*head)->next;

		for (i = 1; current && i < index; i++)
		{
			prev = current;
			current = current->next;
		}

		if (current == NULL)
			return (-1);

		prev->next = current->next;
		free(current);

		return (1);
}
