#include "main.h"
/**
 * puts2 - print every other character
 * @str: pointer on string
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0, length = 0;

	while (str[i] != '\0')
		i++;
	length = i - 1;
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

}
