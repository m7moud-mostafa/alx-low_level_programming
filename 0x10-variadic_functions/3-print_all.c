#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list var;
	int len = 0;
	char sym;
	char *string;

	va_start(var, format);

	while (format[len] != '\0')
	{
		sym = format[len];
		if (sym == 'c')
			printf("%c", va_arg(var, int));
		else if (sym == 'i')
			printf("%i", va_arg(var, int));
		else if (sym == 'f')
			printf("%f", va_arg(var, double));
		else if (sym == 's')
		{
			string = va_arg(var, char *);
			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);
		}
		else
		{
			len++;
			continue;
		}


		while (format[len + 1] != '\0')
		{
			printf(", ");
			break;
		}
		len++;
	}
	printf("\n");
	va_end(var);
}
