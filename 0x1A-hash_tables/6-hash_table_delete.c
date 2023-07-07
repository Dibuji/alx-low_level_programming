#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: pointer to hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		while (temp != NULL)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}
