#include "main.h"
#include <stdlib.h>

/**
 * str_len -helper function to get length
 * @str: string
 * Return: length of string passed
 */

int str_len(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: first n bytes of s2
 * Return: pointer to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* length of the two strings from the str_len function */
	len1 = str_len(s1);
	len2 = str_len(s2);

	/** if number of bytes, n, >= s2, then we dont need to read the extras */

	if (n >= len2)
		n = len2;

	/* Allocating space for new string */
	t = malloc(sizeof(*t) * (len1 + n + 1));
	if (t == NULL)
		return (NULL);

	/* copy s1 into t */
	for (i = 0; i < len1; i++)
	{
		t[i] = s1[i];
	}

	/* Copy n bytes of s2 into t */
	for (i = 0; i < n; i++)
	{
		t[len1 + i] = s2[i];
	}
	t[len1 + n] = '\0';

	return (t);
}
