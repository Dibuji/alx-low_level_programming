#include "main.h"

/**
 * _helper - helper function
 * the natural square root of a number.
 *
 * @n: number
 * @sqr: square root
 * Return: n
 */

int _helper(int n, int sqr)
{
	if (sqr * sqr > n)
	{
		return (-1);
	}
	if (sqr * sqr == n)
	{
		return (sqr);
	}
	else
	{
		return (_helper(n, sqr + 1));
	}
}
/**
 * _sqrt_recursion -  function that returns the
 * natural square root of a number, n
 *
 * @n: number
 * Return: -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_helper(n, 0));
}
