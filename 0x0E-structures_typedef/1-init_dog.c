#include "dog.h"
/**
 * init_dog - function to initialize struct dog
 * @d: pointer on struc dog
 * @name: initial name of the dog
 * @age: initial age of the dog
 * @owner: initial name of dog's owner
 *
 * Return: noting
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
