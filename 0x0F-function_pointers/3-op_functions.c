#include "calc.h"
/**
 * op_add - function to sum two integers
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to substract
 * @a: integer
 * @b: integer
 *
 * Return: substraction of a in b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - functionn to multiply two integers
 * @a: integer
 * @b: integer
 *
 * Return: a multiply by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides x by y
 * @a: integer
 * @b: integer
 *
 * Return: a divide by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}
/**
 * op_mod - function that calculate the remainder  of the division a by b
 * @a: integer
 * @b: integer
 *
 * Return: return division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a % b);
}
