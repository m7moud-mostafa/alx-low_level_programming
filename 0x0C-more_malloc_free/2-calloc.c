#include "main.h"
/**
 * _calloc - allocates memory for an array of a certain number
 *           of elements each of a specified size and sets the memory to zero.
 * @nmemb: the number of elements.
 * @size: the size of each element.
 * Return: a pointer to the allocated and zero-initialized memory or NULL
 *         if nmemb or size is 0 or if memory allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int i;
	char *p;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		p[i] = 0;

	return (p);
}
