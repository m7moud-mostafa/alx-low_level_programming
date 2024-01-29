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
		switch (sym)
		{
		case 'c':
			printf("%c", va_arg(var, int));
			break;
		case 'i':
			printf("%i", va_arg(var, int));
			break;
		case 'f':
			printf("%f", va_arg(var, double));
			break;
		case 's':
				string = va_arg(var, char *);
				if (!string)
				{
					string = "(nil)";
				}
				printf("%s", string);
				break;
		default:
		{
			len++;
			continue;
		}
		}

		if (format[len + 1] != '\0')
		{
			printf(", ");
		}
		len++;
	}
	printf("\n");
	va_end(var);
}
