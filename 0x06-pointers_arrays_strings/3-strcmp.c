#include "main.h"

/**
 * _strcmp - copies array
 * @s1: array
 * @s2: array
 * Return: many cases
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (s1[i] == s2[i])
		return (0);
	else
		return (0 - s2[i]);
}
