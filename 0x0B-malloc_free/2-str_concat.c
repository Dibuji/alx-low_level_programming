#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: pointer to new allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, len3 = 0;
	int i, j;
	char *t;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	len3 = len1 + len2;

	t = malloc(sizeof(*t) * (len3 + 1));
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		t[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		t[i + j] = s2[j];
	}
	t[len3] = '\0';
	return (t);
}
