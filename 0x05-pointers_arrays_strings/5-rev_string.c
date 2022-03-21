#include "main.h"
/**
 * rev_string - reverse a string
 * @s: pointer on string
 * Return: noting
 */
void rev_string(char *s)
{
	if (s)
	{
		int i = 0, j = 0;
		char c = s[i];

		while (c != '\0')
		{
			i++;
			c = s[i];
		}
		i = i - 1;

		while (i != j)
		{
			char temp = s[i];

			s[i] = s[j];
			s[j] = temp;
			j++;
			i--;
		}
	}

}
