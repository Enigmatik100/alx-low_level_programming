#include "main.h"
/**
 * _strncat - funct
 * @dest: res
 * @src: string ths
 * @n: number of chara
 * Return: pointer on dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, l = 0;

	if (dest)
	{
		while (dest[i] != '\0')
			i++;
	}
	if (src)
	{
		while (src[l] != '\0')
			l++;

		int limit =  n < l ? n : l;

		while (j < limit)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	return (dest);
}
