#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: elements of type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL; h = h->next, i++)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
	}

	return (i);
}
