#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1, if argc is not 1
 */

int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);


	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;

		printf("%d\n", coins);
		return (0);
}
