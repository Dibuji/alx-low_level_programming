#include "main.h"

/**
 * _helper - Helper function
 * @n: integer
 * @p: prime number
 * Return: n
 */

int _helper(int n, int p)
{
	if (p == 1)
	{
		return (1);
	}
	if (n % p == 0 && p > 1)
	{
		return (0);
	}
	else
		return (_helper(n, p - 1));
}

/**
 * is_prime_number - Function that identifies a prime number
 * @n: integer
 * Return: 1, if n is a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (_helper(n, n - 1));
	}
}
