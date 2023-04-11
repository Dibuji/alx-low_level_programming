#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array
 * @c: char to initialize with
 * Return: Pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *t;

	t = malloc(_sizeof(*t) * size);
	if (t == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		t[i] = 0;
	}
	return (t);
}
