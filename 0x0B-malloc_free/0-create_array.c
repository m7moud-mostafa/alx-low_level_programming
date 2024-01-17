#include "main.h"
/**
 * create_array - Create a array object
 *
 * @size: size
 * @c:char
 * Return: Null
 */


char *create_array(unsigned int size, char c)
{
	char *address;
	unsigned int i;

	if (size == 0)
		return (NULL);

	address = malloc(size);

	if (address == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		address[i] = c;
	address[size] = c;


	return (address);
}
