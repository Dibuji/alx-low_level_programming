#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0, if successful; 1, if no 2 arguments
 */

int main(int argc, char **argv)
{
	int i, j, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		i = atoi(argv[1]);
		j = atoi(argv[2]);

		prod = i * j;

		printf("%d\n", prod);
		return (0);
}
