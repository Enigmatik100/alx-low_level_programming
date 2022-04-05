#include "main.h"
/**
 * factorial - function tha returns the factorial of a given number
 * @n: integer that factorial will be calculated
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
