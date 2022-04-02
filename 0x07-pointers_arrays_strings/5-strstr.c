#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string to be searched
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack, *q = needle;
	int i = 0, j = 0, length = 0;

	while (needle[length] != '\0')
		length++;

	while (p[i] != '\0')
	{
		if (p[i] == q[j])
		{
			while (q[j] != '\0' && p[i + j] == q[j])
				j++;
			if (j == length)
				return (p + i);
			j = 0;
		}
		else
		{
			i++;
		}
	}
	return ('\0');
}
