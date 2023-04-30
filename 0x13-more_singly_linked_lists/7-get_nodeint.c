#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Return: nth node, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int n = 0;

	while (current_node != NULL)
	{
		if (n == index)
		{
			return (current_node);
		}
		n++;
		current_node = current_node->next;
	}
	return (NULL);
}
