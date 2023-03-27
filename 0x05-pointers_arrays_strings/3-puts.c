#include "main.h"

/**
 * _puts - Print to standard output
 * @str: String value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
