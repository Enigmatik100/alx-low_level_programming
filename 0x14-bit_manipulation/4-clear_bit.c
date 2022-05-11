#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at the given index
 * @n: pointer on the integer
 * @index: index of bit to be set starting from 0
 *
 * Return: 1 if it works and -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n < 63)
		return (-1);
	*n = (*n & (~(1 << index)));
	return (1);
}
