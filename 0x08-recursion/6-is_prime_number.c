#include "main.h"
/**
 * helper - core of operation
 * @n: integer to be checked
 * @i: integer inferior to n
 * Return: 1 if it prime and 0 otherwise
 */
int helper(int n, int i)
{
	if (n < 2 || n % i == 0)
		return (0);
	else if (i > n / 2)
		return (1);
	else
		return (helper(n, i + 1));
}
/**
 * is_prime_number - function to check if integer is prime
 * @n: integer
 * Return: 1 if input is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (helper(n, 2));

}
