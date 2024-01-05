#include "main.h"

/**
 * _strncat - appends and string over other string
 * @src: string
 * @dest: string
 * @n: number of string
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length1 = 0;
	int j = 0;
	int i;

	while (dest[length1] != '\0')
		length1++;

	i = length1;

	for (; i < length1 + n && src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
