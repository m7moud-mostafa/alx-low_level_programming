#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: string
 * Return: duplicated string
 * 
 */

char *_strdup(char *str)
{
	int len;
	int i;
	char *dust;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	dust = malloc(len + 1);
	if (dust == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dust[i] = str[i];

	return (dust);
}

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		string = _strdup(va_arg(strings, char *));

		if (string == NULL)
			printf ("(nil)");

		else
			printf ("%s", string);
		free (string);


		if (i == n - 1)
			printf("\n");
		else if (separator == NULL)
			;
		else
			printf("%s", separator);
	}
	va_end(strings);
}
