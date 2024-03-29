#include "3-calc.h"

/**
 * main - the main function
 *
 * @argc: number of arguments that was entered
 * @argv: a vector that contains the input of the user
 *Return: 0
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	char *op;
	int result;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	result = f(a, b);
	printf("%i\n", result);
	return (0);
}
