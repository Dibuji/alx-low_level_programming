#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Hash table to be updated
 * @key: the key
 * @value: value associated with key
 *
 * Description: Key and Value can't be empty stings. 
 * Also, value must be duplicated
 *
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	
	index = key_index((const unsigned char *)key, ht->size);

	/* check if key already exists in hashtable */
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/* Update the value for an existing key */
			free(temp->value); /* free previous value */
			temp->value = strdup(value); /* duplicate value */
			return (1);
		}
		temp = temp->next;
	}

	/* If key not found, create new node, and add to beginning of list */

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
