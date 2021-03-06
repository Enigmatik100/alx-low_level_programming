#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer on 2D array of integer
 * @width: n_col
 * @height: n_row
 *
 * Return: pointer on 2D Array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;

	return (a);

}
