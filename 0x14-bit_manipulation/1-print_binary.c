#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: integer to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 32768;
	int set = 0;

	if (n == 0)
		_putchar(0 + '0');
	else
	{
		while (mask > 0)
		{
			if ((n & mask) == 0)
			{
				if (set != 0)
					_putchar(0 + '0');
			}
			else
			{
				set = 1;
				_putchar(1 + '0');
			}

			mask = mask >> 1;
		}
	}
}
