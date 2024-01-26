#include "dog.h"
/**
 * print_dog - print the dog name and age and owner
 * @d: pointer to the dog variable
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		if (d->age >= 0)
		{
			printf("Age: %.6f\n", d->age);
		}
		else
		{
			printf("Age: (nil)\n");
		}

		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}

}
