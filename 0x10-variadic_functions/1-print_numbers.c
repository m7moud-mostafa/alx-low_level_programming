#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list integers;
	unsigned int i;

	va_start(integers, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(integers, int));

		if (separator == NULL)
			;
		else if (i == n - 1)
			printf("\n");
		else
			printf("%s", separator);
	}
	va_end(integers);
}
