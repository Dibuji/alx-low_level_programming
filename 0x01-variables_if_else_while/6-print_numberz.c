#include <stdio.h>

/**
 * main - Print single base 10 digits with putchar
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

return (0);
}
