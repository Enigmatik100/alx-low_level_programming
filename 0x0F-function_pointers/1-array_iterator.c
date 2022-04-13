#include "function_pointers.h"
/**
 * array_iterator - function that execute function in parameter on array
 * @array: array of int
 * @size: size of the array
 * @action: pointer on function to be executed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action)
	{
		if (array)
		{
			for (i = 0; i < size; i++)
				(*action)(array[i]);
		}
	}
}
