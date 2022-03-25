#include "main.h"
/**
 * string_toupper - string to uppercase
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i]  <= 'z' && s[i] >= 'a')
			s[i] = 'A' + s[i] - 'a';
		i++;
	}
	s[i] = '\0';
	return (s);
}
