#include <stdlib.h>
#include <stdio.h>
#include "3-main.h"

/**
 * get_op_func - function that selects the correct function to perform operation
 * @s: operator passed as argument to program
 * @Return: Pointer to the correct function, or NULL if s is invalid
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
