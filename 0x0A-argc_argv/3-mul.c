#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to print the name of the program
 * @argc: arg counter
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%i\n", i * j);

	return (0);
}
