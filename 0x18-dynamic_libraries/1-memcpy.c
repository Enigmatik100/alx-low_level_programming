#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory aread dest
 * @dest: string destination
 * @src: string source
 * @n: number of byte
 * Return: pointer on string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(p + i) = *(src + i);
	return (p);
}
