#include "dog.h"
/**
 * new_dog - initializing dog type variable
 * @name: name
 * @age: age
 * @owner: owner name
 * Return: NULL if fails or pointer to the dog_t variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age <= 0 || owner == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
