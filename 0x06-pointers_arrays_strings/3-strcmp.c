#include "main.h"
/**
 * _strcmp - function to compare two string
 * @s1: string
 * @s2: second string to be compared to
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0, m = 0, res, i, greater;

	while (s1[n] != '\0')
		n++;
	while (s2[m] != '\0')
		m++;

	greater = n >= m ? n : m;

	for (i = 0; i < greater && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		res = s1[i] - s2[i];
		if (res != 0)
			return (res);
	}
	if (i == m && i == n)
		return (0);
	else
		return (1);
}
