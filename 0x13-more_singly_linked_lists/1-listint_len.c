#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to head of list
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
