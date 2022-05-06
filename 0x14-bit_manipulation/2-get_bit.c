#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a give index
 * @n: integer
 * @index: index of the bit
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
