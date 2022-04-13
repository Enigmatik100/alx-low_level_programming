#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - function that returns a copy of string
 * @str: string to be copied
 *
 * Return: copy of string as pointer on char
 */
char *_strcpy(char *str)
{
	char *s;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		s = (char *)malloc(size * sizeof(char));
		if (s)
		{
			while (size--)
				s[size] = str[size];
			return (s);
		}
	}
	return (NULL);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer on dog_t or null if allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strcpy(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->age = age;

	d->owner = _strcpy(owner);
	if (d->owner == NULL)
	{
		free(d);
		return (NULL);
	}
	return (d);
}
