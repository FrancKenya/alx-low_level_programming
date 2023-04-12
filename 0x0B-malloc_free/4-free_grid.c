#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: 2 dimensional array
 * @height: height of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int h = 0;

	if (grid != NULL)
	{
		while (h < height)
		{
			free(grid[h]);
			h++;
		}
		free(grid);
	}
}
