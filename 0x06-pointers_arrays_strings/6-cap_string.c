#include "main.h"
/**
 * cap_string - capitalize
 * @s: s
 * Return: s
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sep[] = [' ', '\t', '\n', ';', '.', '!', '?', '"', '(', ')', '{', '}'];

	while (s[i] != '\0')
	{
		if (s[i]  <= 'z' && s[i] >= 'a')
		{
			if (i == 0)
				*(s + i) -= 32;
			else
			{
				for (j = 0; j < 13; j++)
				{
					if(sep[j] == *(s + i - 1))
						s[i] = 'A' + s[i] - 'a';
				}
			}
		}
		i++;
	}
	return (s);
}
