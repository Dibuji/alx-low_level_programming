#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of the elements, each.
 * Return: pointer o nw memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		((char *)t)[i] = 0;
	}
	return (t);
}
