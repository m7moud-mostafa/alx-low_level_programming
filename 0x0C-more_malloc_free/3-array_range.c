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
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
