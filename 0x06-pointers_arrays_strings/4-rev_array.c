#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;
	int j = 0;

	for (i = n - 1; i >= j; i--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
	}
}
