#include "main.h"
/**
 *  leet - encode string
 *  @a: - string
 *  Return: letters
 */

char *leet(char *a)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == s1[j])
			{
				a[i] = s2[j];
			}
		}
		return (a);
	}
}
