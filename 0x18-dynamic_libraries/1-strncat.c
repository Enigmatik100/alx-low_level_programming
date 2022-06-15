#include "main.h"
/**
 * _strncat - function to concatenate two strings
 * @dest: pointer on destination string to be returned
 * @src: string to be concatenated
 * @n: number of character
 * Return: pointer on dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, l = 0, limit;

	if (dest)
	{
		while (dest[i] != '\0')
			i++;
	}
	if (src)
	{
		while (src[l] != '\0')
			l++;

		limit =  n < l ? n : l;

		while (j < limit)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
