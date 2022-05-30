#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s: string length to be determined
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	if (s)
	{
		int i = 0;
		char c = s[i];

		while (c != '\0')
		{
			length++;
			i++;
			c = s[i];
		}
	}
	return (length);
}
