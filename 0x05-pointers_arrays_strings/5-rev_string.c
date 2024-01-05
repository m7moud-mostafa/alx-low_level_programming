#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	int j;
	int tmp;

	while (s[length] != '\0')
		length++;

	j = length - 1;
	i = 0;

	while (i < length && i <= j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
