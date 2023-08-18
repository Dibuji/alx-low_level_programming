#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = newnode;
		newnode->prev = current;
	}

	return (newnode);
}
