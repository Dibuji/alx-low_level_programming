#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints it's name
 * @argv: value of string (name)
 * @argc: number of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *i = argv[0];

	printf("%s\n", i);
	return (0);
}
