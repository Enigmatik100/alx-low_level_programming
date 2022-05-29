#include "main.h"
/**
 * length_nbr - order of scale of the number
 * @n: number
 * Return: length of number
 */
int length_nbr(int n)
{
	int val = 1;

	while (n / 10 != 0)
	{
		n = n / 10;
		val = val * 10;
	}
	return (val);
}
/**
 * print_number - function that prints an integer
 * @n: integer to printed
 */
void print_number(int n)
{
	int length = length_nbr(n);

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	while (length != 0)
	{
		_putchar(n / length + '0');
		n = n % length;
		length = length / 10;
	}
}
