#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees previously allocated grid
 * @grid: pointer being freed
 * @height: height of grid
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
