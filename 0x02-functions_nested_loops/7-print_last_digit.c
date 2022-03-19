#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n : argument
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	if (n >= 0)
		r = n % 10;
	else
		r = (-1 * n) % 10;

	_putchar(r + '0');
	return (r);
}
