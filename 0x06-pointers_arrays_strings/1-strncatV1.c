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
	int i = 0, l = 0;

	while (dest[l] != '\0')
		l++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';
	return (dest);
}
