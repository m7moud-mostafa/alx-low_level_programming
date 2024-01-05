#include "main.h"

/**
 * swap_int - prints an integer
 * @a: The integer a
 * @b: The integer b
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
