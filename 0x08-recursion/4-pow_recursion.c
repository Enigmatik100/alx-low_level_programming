#include "main.h"
/**
 * _pow_recursion - function that returns the value of x^y
 * @x: the integer to be raised in power
 * @y: the power
 * Return: the value of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (-1);

	if (x != 0 && y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
