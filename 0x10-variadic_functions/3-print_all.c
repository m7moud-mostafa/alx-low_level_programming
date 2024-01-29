#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list var;
	int len = 0, need_comma = 0;
	char sym;
	char *string;

	va_start(var, format);
	while (format && format[len] != '\0')
	{
		sym = format[len];
		if (need_comma && (sym == 'c' || sym == 'i' || sym == 'f' || sym == 's'))
		{
			printf(", ");
			need_comma = 0;
		}
		switch (sym)
		{
			case 'c':
				printf("%c", va_arg(var, int));
				need_comma = 1;
				break;
			case 'i':
				printf("%i", va_arg(var, int));
				need_comma = 1;
				break;
			case 'f':
				printf("%f", va_arg(var, double));
				need_comma = 1;
				break;
			case 's':
				string = va_arg(var, char *);
				if (!string)
					string = "(nil)";
				printf("%s", string);
				need_comma = 1;
				break;
		}
		len++;
	}
	printf("\n");
	va_end(var);
}
