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

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	if (ops[i].op == NULL || s[1] != '\0')
		return (NULL);

	return (ops[i].f);
}
