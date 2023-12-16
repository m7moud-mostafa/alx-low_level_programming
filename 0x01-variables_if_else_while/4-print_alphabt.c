#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints letters from a to z using the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');

	return (0);
}
