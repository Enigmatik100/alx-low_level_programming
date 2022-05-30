#include "main.h"
/**
 * _puts - function to print a string
 * @str: pointer on strinng
 * Return: nothing
 */
void _puts(char *str)
{
	if (str)
	{
		int i = 0;
		char c = str[i];

		while (c != '\0')
		{
			_putchar(c);
			i++;
			c = str[i];
		}
		_putchar('\n');
	}
}
