#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - entry point of every C program
* Return: 0 always for success message
*/
int main(void)
{
	int n, rest;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rest = n % 10;
	if (rest > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rest);
	else if (rest == 0)
		printf("Last digit of %d is %d and is 0\n", n, rest);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rest);
	return (0);
}
