#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: function to use to compare
 * Return: the index of the occurence of the returned value of compare function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp)
	{
		if (size <= 0)
			return (-1);
		if (array)
		{
			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]) != 0)
					return (i);
			}
		}
	}
	return (-1);
}
