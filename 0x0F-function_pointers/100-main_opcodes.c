#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints opcodes of its function
 * @n: number of bytes
 * Return: 0, 1 if argument is incorrect. 2 if n < 0
 */

void print_opcodes(int n)
{
	int i;
	unsigned char *ptr = (unsigned char *)&print_opcodes;

	for (i = 0; i < n; i++)
	{
		printf("%02x ", *(ptr + i));
	}
	printf("\n");
}

/**
 * main - printing opcodes
 * @argc: total number of arguments
 * @argv: value of argument
 * Return: 0, 1 if argc != 2, 2 if n < 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(n);
	return (0);
}
