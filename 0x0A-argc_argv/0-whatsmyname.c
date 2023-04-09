#include <stdio.h>

/**
 * main - program that prints it's name
 * @argv: value of string (name)
 * @argc: number of arguments
 * Return: 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	char *i = argv[0];

	printf("%s\n", i);

	return (0);
}
