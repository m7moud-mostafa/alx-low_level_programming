#include "main.h"

/**
 * print_array - prints array
 * @a: array
 * @n: number of elements to printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i\n", a[i]);
	}
}
