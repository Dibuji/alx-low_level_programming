#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @a: string
 * Return: string
 */

char *cap_string(char *a)
{
	int i;

	i = 0;

	while (a[i])
	{
		if ((a[i] >= 'a' && a[i] <= 'z') &&
			(a[i - 1] == ' ' ||
			a[i - 1] == '\t' ||
			a[i - 1] == '\n' ||
			a[i - 1] == ',' ||
			a[i - 1] == ';' ||
			a[i - 1] == '.' ||
			a[i - 1] == '!' ||
			a[i - 1] == '?' ||
			a[i - 1] == '"' ||
			a[i - 1] == '(' ||
			a[i - 1] == ')' ||
			a[i - 1] == '{' ||
			a[i - 1] == '}' ||
			i == 0))
		{
			a[i] = a[i] - 32;
		}
		i++;
	}
	return (a);
}
