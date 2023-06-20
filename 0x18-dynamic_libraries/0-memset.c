#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: Pointer
 * @b: Constant byte
 * @n: First n bytes of memory area
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

