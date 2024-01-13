#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function to print the name of the program
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int num_change = 0;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
		printf("%i\n", 0);

	else
	{
		num_change += change / 25;
		change = change % 25;

		num_change += change / 10;
		change = change % 10;

		num_change += change / 5;
		change = change % 5;

		num_change += change / 2;
		change = change % 2;

		num_change += change / 1;
		printf("%i\n", num_change);
	}

	return (0);

}
