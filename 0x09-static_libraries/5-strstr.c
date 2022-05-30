#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string to be searched
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *p = haystack;
	char *q = needle;

	while (p[i] != '\0')
	{
		j = 0;
		while (q[j] != '\0' && p[i + j] != '\0' && q[j] == p[i + j])
		{
			j++;
		}
		if (q[j] == '\0')
			return (p + i);
		i++;
	}
	return ('\0');
}
