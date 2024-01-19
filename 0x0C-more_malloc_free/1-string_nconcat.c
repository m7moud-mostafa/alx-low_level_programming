#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximum number of bytes of s2 to concatenate to s1.
 * Return: a pointer to the newly allocated space in memory with s1 followed by the first n bytes of s2, and null-terminated. Returns NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)