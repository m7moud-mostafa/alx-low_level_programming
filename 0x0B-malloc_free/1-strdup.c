#include "main.h"
/**
 * _strdup - Create a array object
 *
 * @str: string
 * Return: something
 */


char *_strdup(char *str)
{
	int size;
	char *pointer;
	int i;

	if (str == NULL)
		return (NULL);

	size = sizeof(str);
	pointer = malloc(size);

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		pointer[i] = str[i];

	return (pointer);
}
