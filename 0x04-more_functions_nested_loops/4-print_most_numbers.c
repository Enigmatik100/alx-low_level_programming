#include "main.h"
/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * @void: no argument
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 53)
			_putchar(i);
	}
	_putchar('\n');
}
