#include "main.h"
/**
 * puts2 - print every other character
 * @str: pointer on string
 * Return: nothing
 */
void puts2(char *str)
{
	char *p = str;
	int i = 0;

	while(str[i] != '\0' && str[i+1] != '\0')
	{
		_putchar(*(p + i));
		i+=2;
	}
}
