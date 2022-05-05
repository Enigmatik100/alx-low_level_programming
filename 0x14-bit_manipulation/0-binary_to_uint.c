#include "main.h"
#include <stdio.h>
/**
 * power - function that calculates x power y
 * @x: int
 * @y: int
 *
 * Return: x^y
 */
unsigned int power(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * power(x, y - 1));
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: string of binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int hp = 0, i = 0;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (b[hp] != '\0')
		hp++;

	i = hp - 1;
	hp--;
	while (i >= 0)
	{
		if (b[i] < 48 || b[i] > 49)
			return (0);

		n += (b[i] - 48) * power(2, hp - i);
		i -= 1;
	}
	return (n);
}
