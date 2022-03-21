#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer on integer to be swaped
 * @b: pointer on integer to be swaped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
