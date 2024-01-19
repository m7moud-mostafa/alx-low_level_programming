#include "main.h"
/**
 * array_range - creates an array of integers containing all
 *               values from min to max (inclusive).
 * @min: the minimum integer value to include in the array.
 * @max: the maximum integer value to include in the array.
 * Return: a pointer to the newly created array of integers or
 *         NULL if min > max or if memory allocation fails.
 */
int *array_range(int min, int max)
{
	int i;
	int *p;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);


	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
