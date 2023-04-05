#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: number
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
