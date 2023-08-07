#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free a 2d array
 * @grid: parameter 2D array to free
 * @height: parameter number of rows of grid
 * Return: nothing avoid
 */
void free_grid(int **grid, int height)
{
	for (height -= 1; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
