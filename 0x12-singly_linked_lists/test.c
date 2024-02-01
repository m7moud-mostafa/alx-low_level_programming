#include <stdio.h>
#include <stdlib.h>



typedef struct node
{
	int number;
	struct node *next;
} node;

void print_list(node *list);

int main(int argc, char **argv)
{
	node *list = NULL;
	node *n;
	int i;
	int number;


	for (i = 0; i < argc; i++)
	{
		number = atoi(argv[i]);

		n = malloc(sizeof(node));
		if (n == NULL)
			return (1);
		n->number = number;
		n->next = list;
		list = n;
	}
	print_list(list);
	return (0);

}

void print_list(node *list)
{
	int i;
	node *ptr;

	ptr = list;

	if (list != NULL)
	{
		for (i = 0; ptr->next != NULL; i++)
		{
			printf("%i\n", ptr->number);
			ptr = ptr->next;

		}

	}
}
