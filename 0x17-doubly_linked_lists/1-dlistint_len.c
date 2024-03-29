#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list.
 *
 * @h: head of the list
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
