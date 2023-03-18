#include <stdio.h>

/**
 * main - Printing alphabet in reverse with putchar
 * Return: 0
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
return (0);
}
