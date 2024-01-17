#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: combined string
 */


char *str_concat(char *s1, char *s2)
{
	char *full_string;
	int size1;
	int size2;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2) + 1;
	full_string = malloc(size1 + size2);

	if (full_string == NULL)
		return (NULL);

	for (i = 0; s1 && s1[i]; i++)
		full_string[i] = s1[i];

	for (j = 0; s2 && s2[j]; j++)
		full_string[i + j] = s2[j];

	full_string[i + j] = '\0';
	return (full_string);
}
