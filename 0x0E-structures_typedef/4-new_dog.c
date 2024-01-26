#include "dog.h"

/**
 * _strdub - duplicates a string
 * @s: source string
 * Return: copy of s (dust)
 */
void *_strdub(char *s)
{
	char *dust;
	int len;
	int i;

	len = 0;
	if (s == NULL)
		return (NULL);

	while (s[len] != '\0')
		len++;

	dust = malloc(len + 1);

	if (dust == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dust[i] = s[i];

	return (dust);
}


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

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdub(name);
	if (dog->name == NULL)
	{
		free (dog);
		return (NULL);
	}
	dog->owner = _strdub(owner);
	if (dog->owner == NULL)
	{
		free (dog);
		return (NULL);
	}

	dog->age = age;
	if (dog->age <= 0)
	{
		free (dog);
		return (NULL);
	}

	return (dog);
}
