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
	unsigned int i;
	unsigned int opp;

	opp = n ^ m;
	i = 0;
	while (opp != 0)
	{
		i = i + (opp & 1);
		opp = opp >> 1;
	}
	return (i);
}
