#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 3D array
 * @grid: pointer on 2D array
 * @height: n_row
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
