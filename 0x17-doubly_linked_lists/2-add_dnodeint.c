#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to a pointer containing head node
 * @n: value of new node
 * Return: address of new element, or NULL is it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return NULL;

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}
