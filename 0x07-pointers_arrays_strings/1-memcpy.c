#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: amount of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
