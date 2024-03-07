#include "main.h"
#include <stdlib.h>
/**
 *free_grid - frees previously made alloc grid func
 *@grid: the grid
 *@height: 2d
 *Return: freed grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
