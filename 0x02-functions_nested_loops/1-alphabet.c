#include "main.c"

/**
 * print_alphabet - in lowercase using putchar
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (void);
}
