#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: elements of type list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (; h != '\0'; h = h->next; i++)
	{
		if (h->str == NULL)
		printf("[0] (nil)");

		else
			printf("%s\n", h->str);
	}
	return (i);
}
