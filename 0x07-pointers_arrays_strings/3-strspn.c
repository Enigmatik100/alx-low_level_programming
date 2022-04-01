#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept: accept string to be searched
 * Return: int length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	char *p = accept;
	int find;

	do {
		find = 0;
		j = 0;
		while (*(p + j) != '\0')
		{
			if (s[i] == *(p + j))
			{
				find = 1;
				break;
			}
			j++;
		}
		i++;
	} while (s[i] != '\0' && find != 0);
	return (i == 0 ? 0 : i - 1);
}
