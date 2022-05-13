#include "main.h"
/**
 * countSetBits - function that counts set bits
 * @n: integer
 *
 * Return: integer
 */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0, x = n;

	while (x != 0)
	{
		count = count + (x & 1);
		x = x >> 1;
	}
	return (count);
}
/**
 * flip_bits - function taht returns the number of bits to be flipped
 * @n: first integer
 * @m: second integer
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
