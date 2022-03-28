#include "main.h"
/**
 * leet - function that encode
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i = 0, j;
	int c[] = {'o', 'l', '-', 'e', 'a', '-', '-', 't'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 8; j++)
			if (s[i] != '-' && (s[i] == c[j] || s[i] == c[j] - 32))
				s[i] = 48 + (j % 8);
		i++;
	}
	return (s);
}
