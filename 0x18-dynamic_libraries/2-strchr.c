#include "main.h"
/**
 * _strchr - function to locates a character in a string
 * @s: pointer on char
 * @c: character
 * Return: pointer on the first occurence of the character and NULL otherwise
 */
char *_strchr(char *s, char c)
{
	char *p = s;
	int i = 0;

	while (s[i] != '\0')
	{
		if (c == *(p + i))
			return (p + i);
		i++;
	}
	if (*(p + i) == c)
		return (p + i);
	return ('\0');
}
