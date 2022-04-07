#include <stdio.h>
#include <stdlib.h>
/**
 * _isnumber - function to check if string is number
 * @num: string
 * Return: 0 if is true and 1 otherwise
 */
int _isnumber(char *num)
{
	int i = 0;

	while (num[i] != '\0')
	{
		if (!(num[i] >= '0' && num[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - entrypoint of every c program
 * @argc: count arguments
 * @argv: array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (_isnumber(argv[i]) == 1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
