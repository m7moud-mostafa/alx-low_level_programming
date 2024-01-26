#include "dog.h"
/**
 * init_dog - initializing the variable of type struct dog
 * @d:the address of the variable
 * @name: name to be assigned
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
