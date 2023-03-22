#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter, or NULL if s does not match any of the 5 expected
 * operators (+, -, *, /, %)
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op) && *(s + 1) == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
