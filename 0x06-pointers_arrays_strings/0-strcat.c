#include "main.h"

/**
 * _strcat - appends and string over other string
 * @src: string
 * @dest: string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int length1 = 0;
	int length2 = 0;
	int j = 0;
	int i;
	while (dest[length1] != '\0')
		length1++;
	while (src[length2] != '\0')
		length2++;

	i = length1;

	for (; i <= length1 + length2; i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);
}