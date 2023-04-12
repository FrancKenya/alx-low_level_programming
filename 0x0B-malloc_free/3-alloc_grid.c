#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **x; /* the grid */

	int h = 0;
	int j = 0;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	x = malloc(sizeof(int *) * height);

	if (x == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		x[h] = malloc(sizeof(int) * width);

		if (x[h] == NULL) /* free memory previously allocated */
		{
			while (j < h)
			{
				free(x[j]);
				j++;
			}
			free(x);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (j = 0; j < width; j++)
		{
			x[h][j] = 0;
		}
	}
	return (x);
}
