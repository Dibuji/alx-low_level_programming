#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s:character
 * @accept: where to get the bytes
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
			if (!accept[b])
			{
				break;
			}
		}
	}
	return (a);
}
