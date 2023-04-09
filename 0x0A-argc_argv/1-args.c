#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: value of string
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return(0);
}
