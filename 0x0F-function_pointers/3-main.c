#include "3-calc.h"
/**
 * main - function main
 * @ac: argument count
 * @av: array of the argument
 * Return: 0 for success
 */
int main(int ac, char *av[])
{
	int a, b;
	char op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(av[2]) != 1)
	{
		op = av[2][0];
		if (op != '+' && op != '-' && op != '/' && op != '%' && op != '*')
		{
			printf("Error\n");
			return(NULL);
			exit(99);
		}
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	printf("%d\n", get_op_func(av[2])(a, b));
	return (0);
}
