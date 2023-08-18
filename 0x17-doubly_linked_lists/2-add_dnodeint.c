#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
