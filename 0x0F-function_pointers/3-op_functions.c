#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Returns sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference
 */

int op_sub(int a, int b)
{
	int difference = 0;

	difference = a - b;

	/**
	 * I realized that I can actually just do;
	 * return (a - b)
	 * and it would be correct, without initializing difference variable
	 */
	return (difference);
}

/**
 * op_mul - returns the product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product
 */

int op_mul(int a, int b)
{
	int product = 0;

	product = a * b;
	return (product);
}

/**
 * op_div - Returns result of division of a by b
 * @a: first integer
 * @b: second integer
 * Return: division or 100 if /0
 */

int op_div(int a, int b)
{
	int division = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	division = a / b;
	return (division);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: Mod result, remainder.
 */

int op_mod(int a, int b)
{
	int mod = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	mod = a % b;
	return (mod);
}
