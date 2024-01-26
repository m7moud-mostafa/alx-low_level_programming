#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *str, *separator = "";
	char types[] = "cifs";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j])
		{
			if (format[i] == types[j])
			{
				printf("%s", separator); // Replace with _putchar loop if needed
				switch (format[i])
				{
					case 'c':
						_putchar(va_arg(args, int));
						break;
					case 'i':
						/* Implement integer to string conversion and print */
						break;
					case 'f':
						/* Implement float to string conversion and print */
						break;
					case 's':
						str = va_arg(args, char *);
						if (!str)
							str = "(nil)";
						while (*str)
							_putchar(*str++);
						break;
				}
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	_putchar('\n');
	va_end(args);
}
