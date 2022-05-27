#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 * @void: nothing
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, end, k;

	for (k = 0; k < 10; k++)
	{
		end = 58;
		for (i = 0; i < 2; i++)
		{
			for (j = 48; j < end; j++)
			{
				if (i == 1)
					_putchar(49);
				_putchar(j);
			}
			end = 53;
		}
		_putchar('\n');
	}
}
