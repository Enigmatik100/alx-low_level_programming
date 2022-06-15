#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: string to be searched
 * Return: pointer on string s
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	char *p = s;

	while (p[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == p[i])
				return (p + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
