#include <stdlib.h>
#include "main.h"
/**
 * create_array - function to initialize array with char
 * @size: size of the array
 * @c: a character
 *
 * Return: pointer on new array of char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
