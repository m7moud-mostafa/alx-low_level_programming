#include "function_pointers.h"

/**
 * print_name - prints the name that was passed to the function
 *
 * @name: the name to be printed
 * @f: The style which the name will be printed with
 */

void print_name(char *name, void (*f)(char *))
{
	if(name == NULL)
		return;

	f(name);
}
