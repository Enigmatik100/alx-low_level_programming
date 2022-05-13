#include "main.h"
/**
 * flip_bits - function taht returns the number of bits to be flipped
 * @n: first integer
 * @m: second integer
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux;
	unsigned int i = 0;

	aux = (n ^ m);
	while (aux)
	{
		i += (aux & 1);
		aux >>= 1;
	}

	return (i);
}
