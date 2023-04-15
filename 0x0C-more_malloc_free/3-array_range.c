#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *t, i;

	if (min > max)
		return (NULL);

	/* Allocating memory for the array, max is the highest value */
	t = malloc(sizeof(*t) * (max - min + 1));
	if (t == NULL)
		return (NULL);

	for (i = min; i < max + 1; i++)
	{
		t[i - min] = i;
	}
	return (t);
}
