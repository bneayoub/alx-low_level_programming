#include "3-calc.h"

/**
 * get_op_func - function that selects the correct
 * function to perform the operation asked by the user.
 *
 * @s: user's input operator
 *
 * Return: pointer to the right op function
 * otherwise return NULL
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
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
