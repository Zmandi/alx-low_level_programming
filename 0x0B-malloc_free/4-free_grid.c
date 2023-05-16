#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Free a 2 dimensional grid
 * @grid: two dimensional grid
 * @height: height dimension
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
