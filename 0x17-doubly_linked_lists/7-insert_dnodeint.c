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
	dlistint_t *current = *h, *temp = NULL, *newnode;

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

	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}

	temp = current->next;

	if (temp == NULL)
		return (add_dnodeint_end(h, n));

	current->next = newnode;
	newnode->prev = current;
	newnode->next = temp;
	temp->prev = newnode;

	return (*h);
}
