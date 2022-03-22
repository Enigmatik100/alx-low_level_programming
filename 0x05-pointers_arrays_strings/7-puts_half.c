#include "main.h"
/**
 * puts_half - print every other character
 * @str: pointer on string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0, length = 0, n;

	if (str)
	{
		while (str[i] != '\0')
			i++;
		length = i;

		if (length % 2 == 0)
			n = length / 2;
		else
			n = (length - 1) / 2;

		for (i = n; i <= length; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
