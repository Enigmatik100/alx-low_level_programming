#include "calc.h"
/**
 * add - function to sum two integers
 * @a: first integer argument
 * @b: second integer argument
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function to substract
 * @a: integer
 * @b: integer
 *
 * Return: substraction of a in b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - functionn to multiply two integers
 * @a: integer
 * @b: integer
 *
 * Return: a multiply by b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function that divides x by y
 * @a: integer
 * @b: integer
 *
 * Return: a divide by b
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * mod - function that calculate the remainder  of the division a by b
 * @a: integer
 * @b: integer
 *
 * Return: return division of a by b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
