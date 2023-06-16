#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to start of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
