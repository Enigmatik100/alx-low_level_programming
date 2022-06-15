#include "main.h"
/**
 * _strcpy - copie str in dest
 * @dest: pointer on string dest
 * @src: pointer on string to be copied
 * Return: pointer on string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
