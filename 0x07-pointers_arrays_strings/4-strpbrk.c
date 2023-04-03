#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: s that matches byte in accept, or NULL if nothing found
 */

char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
				return (s);
		}
		s++;
	}
	return ('\0');
}
