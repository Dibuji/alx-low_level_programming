#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 *		and returns the data the head node contained
 * @head: pointer to a pointer to the first node
 * Return: data contained by the head node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *a;
	int data = 0;

	if (head == NULL)
		return (0);

	a = *head;
	*head = (*head)->next;
	data = a->n;
	free(a);

	return (data);
}
