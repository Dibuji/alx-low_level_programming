#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sep - to print a separator
 * @i: index
 */

void sep(int i)
{
	if (i != 0)
		printf(", ");
}


/**
 * print_all - program to print anything
 * @format: format types
 */

void print_all(const char * const format, ...)
{
	char *str;
	int i = 0, sep_count = 0;
	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				sep(sep_count);
				printf("%c", va_arg(args, int));
				sep_count++;
				break;
			case 'i':
				sep(sep_count);
				printf("%d", va_arg(args, int));
				sep_count++;
				break;
			case 'f':
				sep(sep_count);
				printf("%f", va_arg(args, double));
				sep_count++;
				break;
			case 's':
				sep(sep_count);
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";

				printf("%s", str);
				sep_count++;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
