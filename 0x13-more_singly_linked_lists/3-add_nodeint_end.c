#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to a pointer to the first node
 * @n: integer for the new node that'd be stored at the end of the list
 * Return: address of new element, NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *ith_node;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	ith_node = *head;
	while (ith_node->next != NULL)
	{
		ith_node = ith_node->next;
	}

	ith_node->next = newnode;

	return (newnode);
}
