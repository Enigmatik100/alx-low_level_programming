#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: integer
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
