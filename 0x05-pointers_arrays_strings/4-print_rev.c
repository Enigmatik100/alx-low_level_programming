#include "main.h"
/**
 * print_rev - reverse a string
 * @s: pointer on string
 * Return: noting
 */
void print_rev(char *s)
{
	if (s)
	{
		int i = 0;
		char c = s[i];

		while (c != '\0')
		{
			i++;
			c = s[i];
		}
		i = i - 1;

		while (i >= 0)
		{
			_putchar(s[i]);
			i--;
		}
		_putchar('\n');

	}

}
