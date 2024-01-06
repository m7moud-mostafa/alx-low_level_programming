#include "main.h"
/**
 * string_toupper - string to upper
 * @str: string
 *  Return: string in upper case
 */
char *string_toupper(char *str)
{
	int i = 0;
	int length;

	while (str[length] != '\0')
		length++;

	for (; i < length; i++)
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
	}
	return (str);
}
