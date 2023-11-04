#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the index for the key/value pair to be stored in
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = 0;

	i = hash_djb2(key);

	return (i % size);
}
