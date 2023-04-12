#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: rows of grid
 * @height: columns of grid
 * Return: pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **t;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocating memory for rows, which is defined as height */
	t = malloc(sizeof(*t) * height);
	if (t == NULL)
	{
		return (NULL);
	}

	/* Iterating through the Rows, to allocate memory for the columns in it */
	for (i = 0; i < height; i++)
	{
		t[i] = malloc(width * sizeof(int));

		/* if it is NULL then it is a failure and question says, return NULL */
		if (t[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(t[j]);
			}
			free(t);
			return (NULL);
		}

		/* To initialize each element to zero, we iterate through each column */
		for (j = 0; j < width; j++)
		{
			t[i][j] = 0;
		}
	}
	return (t);
}
