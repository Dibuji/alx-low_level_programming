#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *a, *b;
	size_t count;

	if (!head)
		exit(98);

	a = b = head;
	count = 0;
	while (b && b->next)
	{
		count++;
		a = a->next;
		b = b->next->next;

		if (a == b)
		{
			a = head;
			while (a != b)
			{
				count++;
				a = a->next;
				b = b->next;
			}
			printf("-> [%p] %d\n", (void *) b, b->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *) a, a->n);
	}

	count++;
	printf("[%p] %d\n", (void *) b, b->n);
	return (count);
}
