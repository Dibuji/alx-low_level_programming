#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: beginning of substring, or NULL if none
 */

char *_strstr(char *haystack, char *needle)
{
	for (haystack = 0; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *a != '\0')
		{
			a++;
			b++;
		}
		if (*a == '\0')
			return (haystack);
	}
	return (0);
}
