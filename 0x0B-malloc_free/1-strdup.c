#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer to a new memory space
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be copied
 *
 * Return: NULL, if str is NULL;
 * NULL if insufficient memory;
 * pointer to str duplicate.
 *
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *t;

	if (str == NULL)
	{
		return (NULL);
	}

		while (str[len] != '\0')
		{
			len++;
		}

	t = malloc(sizeof(*t) * (len + 1));
	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		t[i] = str[i];
	}
	t[len] = '\0';
	return (t);
}
