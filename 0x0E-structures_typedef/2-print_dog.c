#include "dog.h"
/**
 * print_dog - print the dog name and age and owner
 * @d: pointer to the dog variable
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	char *age_str = "(nil)";
	float age;

	age = d->age;

	if (d != NULL)
	{
		if (d->name == NULL)
			name = age_str;
		else
			name = d->name;
		if (d->owner == NULL)
			owner = age_str;
		else
			owner = d->owner;
		printf("Name: %s\nAge: %.6f\nOwner: %s\n", name, age, owner);
	}
}
