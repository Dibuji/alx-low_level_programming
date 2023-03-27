#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: value of string
 */

void print_rev(char *s)
{
	int len = o;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len < 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
