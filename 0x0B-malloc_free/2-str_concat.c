#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: pointer on string
 * @s2: pointer on second string
 *
 * Return: pointer on new string concatation of s1 follow by s2
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, lens1 = 0, lens2 = 0, amount = 1;
	char *s;

	if (s1 != NULL)
	{
		while (s1[lens1] != '\0')
			lens1++;
	}

	if (s2 != NULL)
	{
		while (s2[lens2] != '\0')
			lens2++;
	}

	s = malloc(sizeof(char) * (lens1 + lens2 + amount));

	if (s == NULL)
		return (NULL);

	if (s1 != NULL)
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
	if (s2 != NULL)
		while (s2[j] != '\0')
		{
			s[i] = s2[j];
			j++;
			i++;
		}
	s[i] = '\0';
	return (s);
}
