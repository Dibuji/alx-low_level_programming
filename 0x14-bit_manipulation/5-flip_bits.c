#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		i += result & 1;

		result >>= 1;
	}
	return (i);
}
