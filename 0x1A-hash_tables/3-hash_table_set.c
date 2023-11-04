#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: Hash Table
 * @key: the key
 * @value: value associated with key
 * Return: 1 if success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = (value) ? strdup(value) : NULL;

	if (new_node->key == NULL || (value && new_node->value == NULL))
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
