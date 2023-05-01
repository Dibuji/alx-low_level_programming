#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: pointer to pointer to first node
 * @idx: index where new node should be added
 * @n: value of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp = *head;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
