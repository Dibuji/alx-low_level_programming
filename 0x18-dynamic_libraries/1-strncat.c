#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: value of string one
 * @src: value of string two
 * @n: amount of space reserved for use
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
return (dest);
}
