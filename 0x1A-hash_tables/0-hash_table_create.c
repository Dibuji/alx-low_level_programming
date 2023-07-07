#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of array
 * Return: Pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int i;

	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL);

	newtable->size = size;
	newtable->array = malloc(sizeof(hash_node_t *) * size);
	if (newtable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		newtable->array[i] = NULL;
	}

	return (newtable);
}
