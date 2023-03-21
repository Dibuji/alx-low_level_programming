#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: an alphabet
 * Return: 1 if c is a letter, otherwise Return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
