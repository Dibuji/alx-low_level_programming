#include "lists.h"

/**
 * sum_listint -  function that returns the sum of all the data of linked list
 * @head: pointer to first node
 * Return: sum, else 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}

