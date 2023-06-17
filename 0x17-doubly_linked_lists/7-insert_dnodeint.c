#include "lists.h"
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer pointing to head of list
 * @idx: index of list where new node should be added
 * @n: value of new node
 * Return: address of new node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h, *newnode;

	if (idx == 0)
		return (add_dnodeint(h, n));

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || i != idx - 1)
	{
		free(newnode);
		return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	newnode->next = current->next;
	newnode->prev = current;
	current->next->prev = newnode;
	current->next = newnode;

	return (*h);
}
