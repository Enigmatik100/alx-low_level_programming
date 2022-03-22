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
		int length, c = 0;
		char *begin, *end, temp;

		end = s;
		begin = s;
		while (end[c] != '\0')
			c++;
		length = c - 1;
		for (c = 0; c < length; c++)
			end++;
		for (c = 0; c <= length / 2; c++)
		{
			temp = *end;
			*end = *begin;
			*begin = temp;
			end--;
			begin++;
		}

	}

}
