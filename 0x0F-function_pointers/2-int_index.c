#include "function_pointers.h"

/**
 * int_index - A function that returns the index of the first element
 *			   for which the cmp function does not return 0
 *
 * @array: The array
 * @size: The size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: -1 if the integer is not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
