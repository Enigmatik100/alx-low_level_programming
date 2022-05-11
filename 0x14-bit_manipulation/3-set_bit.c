#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at given index
 * @n: pointer on unsigned long int
 * @index: index of bit
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1 << index) | (*n));
	return (1);
}
