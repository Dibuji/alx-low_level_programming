#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: pointer to hash table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		
		while (temp != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;

			comma_flag = 1;
			if (temp != NULL)
				printf(", ");
		}
	}
	printf("}\n");
}
