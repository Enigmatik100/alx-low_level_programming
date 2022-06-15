#include "main.h"
/**
 * _memset - function to fills memory with a constant byte
 * @s: pointer on char
 * @b: constant byte b
 * @n: number of byte to be filled
 * Return: pointer on char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *p = s;

	for (i = 0; i < n; i++)
		*(p + i) = b;
	return (s);
}
