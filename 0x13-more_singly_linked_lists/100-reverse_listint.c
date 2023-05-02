#include "lists.h"

/**
 * reverse_listint - reverse the lists in a linked list
 * @head: pointer to pointer to first node
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *prev = NULL, *temp;

	while (current != NULL)
	{
		temp = current->next;
		current->next = prev;
		prev = current;
		current = temp;
	}

	*head = prev;
	return (*head);
}
