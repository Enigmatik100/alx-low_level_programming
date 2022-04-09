#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function to concatenate all the arguments
 * @ac: count arguments
 * @av: array of arguments
 *
 * Return: pointer on new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0, size = 0;
	char *s;

	if (ac < 2 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		len += strlen(av[i]);

	s = malloc((len + ac - 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	k = 0;
	for (i = 1; i < ac; i++)
	{
		size = strlen(av[i]);
		for (j = 0; j < size; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
