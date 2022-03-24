#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: string to be cacatenated
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	if (dest)
	{
		while (dest[i] != '\0')
			i++;
	}
	if (src)
	{
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	return (dest);
}
