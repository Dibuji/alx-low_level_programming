#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: beginning of node
 * @str: string
 * Return: Address of new element, NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *newnode;
	list_t a = (*head);
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
		(*head) = newnode;
	return (newnode);

	while (a->next)
		a = a->next;
	a->next = newnode;

	return (newnode);
}

