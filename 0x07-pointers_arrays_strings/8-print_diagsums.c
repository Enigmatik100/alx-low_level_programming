#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of two diagonals
 * @a: array of integer in 1D
 * @size: size of squre matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int value = 0, sum1 = 0, sum2 = 0;

	while (i < (size * size))
	{
		value = *(a + i);
		sum1 += value;
		i += (size + 1);
	}
	i = size - 1;
	while (i < (size * size))
	{
		value = *(a + i);
		sum2 += value;
		i += (size - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
