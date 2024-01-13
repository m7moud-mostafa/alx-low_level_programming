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
	int i = 1;
	int j = 0;
	int sum = 0;

	if (argc == 1)
		printf("%i\n", 0);

	else
	{
		for (; i < argc; i++)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
		printf("%i\n", sum);

	}
	return (0);
}
