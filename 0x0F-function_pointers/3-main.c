#include "3-calc.h"
/**
 * main - function main
 * @argc: argument count
 * @argv: array of the argument
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int a, b, res;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2][0];

	if (op != '+' && op != '-' && op != '/' && op != '%' && op != '*')
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = get_op_func(argv[2])(a, b);
	printf("%d\n", res);
	return (0);
}
