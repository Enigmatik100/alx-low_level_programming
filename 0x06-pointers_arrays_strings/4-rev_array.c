#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: pointer on array of integer
 * @n: size of the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
