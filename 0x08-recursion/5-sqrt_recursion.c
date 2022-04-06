#include "main.h"
/**
 * sqrt_calculator - find the square root of the number
 * @n: number
 * @i: index
 * Return: the sqrt
 */
int sqrt_calculator(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_calculator(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the square root of number
 * @n: number
 * Return: square root of the integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_calculator(n, 1));
}
