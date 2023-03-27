#include "main.h"

/**
 * rev_string - reverse string
 * @s: string value
 */

void rev_string(char *s)
{
	int len = 0;
	char *t = s;
	char tmp;

	while (*t != '\0')
	{
		len++;
		t++;
	}
	t--;
	while (s < t)
	{
		tmp = *s;
		*s++ = *t;
		*t-- = tmp;
	}
}
