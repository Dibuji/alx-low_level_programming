#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: total count of parameters
 * Return: 0, if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	/* if n is zero, return 0 */
	if (n == 0)
		return (0);

	/* initialize argument list */
	va_start(args, n);

	/* using i to iterate through the list, whilst summing up */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
