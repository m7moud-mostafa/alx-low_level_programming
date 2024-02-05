#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform
 *				 the operation asked by the user.
 *
 * @s: The operator passed as argument.
 * Return: A pointer to a function that takes two integers as arguments
 *		   and returns an integer. If no matching operation is found,
 *		   NULL is returned.
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

	while (ops[i].op[0] != s[0] && i != 5)
		i++;
	printf("I'm inside the get_op_func and i = %i\n", i);
	return (ops[i].f);
}
