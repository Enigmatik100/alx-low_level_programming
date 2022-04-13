#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer on dog_t;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
