#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free the momory of our 2D grid
 *
 * @grid: the 2D array freed
 * @height: the height of the array
 *
 * Return: void, grid free'd
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
