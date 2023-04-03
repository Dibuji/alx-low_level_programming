#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: array pointer
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int c, s1, s2;

	s1 = 0;
	s2 = 0;

	for (c = 0; c < size; c++)
	{
		s1 = s1 + a[c * size + c];
	}
	for (c = size - 1; c >= 0; c--)
	{
		s2 = s2 + a[c * size + (size - c - 1)];
	}
	printf("%d, %d\n", s1, s2);
}
