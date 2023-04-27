#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first node
 * @str: contains string
 * Return: Address of new element, NULL if function fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len(str);
	newnode->next = (*head);
	(*head) = newnode;

	return (newnode);
}
