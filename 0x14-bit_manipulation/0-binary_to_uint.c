#include "main.h"
#include "stddef.h"

/**
 * binary_to_uint - binary to int
 * @b: binary number pointer
 * Return: number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);

		result = 2 * result + b[a] - '0';
	}
	return (result);
}
