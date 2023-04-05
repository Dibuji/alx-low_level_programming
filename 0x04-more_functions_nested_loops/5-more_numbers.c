#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14
 *
 */

void more_numbers(void)
{
	int a, b;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b >= 10)
			{
				_putchar(b / 10 + '0');
			}
			_putchar (b % 10 + '0');
			b++;
		}
		_putchar('\n');
		a++;
	}
}
