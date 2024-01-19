#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
		len++;

	for (; i <= len; i++)
	{
		if (s[i] == c)
			break;
	}

	if (i == len - 1)
		return (NULL);

	else
		return (s + i);
}
