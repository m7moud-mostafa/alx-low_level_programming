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

	address = malloc(size);

	if (address != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			address[i] = c;
		address[size] = c;
	}

	return (address);
}
