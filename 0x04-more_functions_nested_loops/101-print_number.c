#include "main.h"
/**
 * scale_order - order of scale of the number
 * @n: number
 * Return: length of number
 */
int scale_order(int n)
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
	int length;
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n;
	length = scale_order(m);
	while (length != 0)
	{
		_putchar((m / length) + '0');
		m = m % length;
		length = length / 10;
	}
}
