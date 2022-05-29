#include <stdio.h>
#include <math.h>
/**
 * get_max_prime_factor - function that get the max prime factor
 * @n: number to be checked
 * Return: max prime factor
 */
long int get_max_prime_factor(long int n)
{
	long int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	return (max);
}
/**
 * main - entry point of every c program
 * Return: integer the largest prime factor of the number
 */
int main(void)
{
	long int val = 612852475143;

	printf("%ld\n", get_max_prime_factor(val));
	return (0);
}
