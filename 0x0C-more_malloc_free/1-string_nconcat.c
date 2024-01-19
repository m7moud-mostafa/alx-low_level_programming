#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of bytes of s2 to concatenate to s1.
 * Return: a pointer to the newly allocated space in memory with
 *         s1 followed by the first n bytes of s2, and
 *         null-terminated. Returns NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strf;
	unsigned int len1 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strf = malloc(len1 + n + 1);
	if (strf == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	for (i = 0; i < len1; i++)
		strf[i] = s1[i];

	for (j = 0; i < len1 + n && s2[j] != '\0'; j++, i++)
		strf[i] = s2[j];

	strf[len1 + n] = '\0';
	return (strf);

}
