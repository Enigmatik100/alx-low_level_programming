#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function to a copy a string
 * @str: pointer on a string
 *
 * Return: pointer on string
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
