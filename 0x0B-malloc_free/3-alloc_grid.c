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

	int i = 0;
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
	while (i < height)
	{
		x[i] = malloc(sizeof(int) * width);

		if (x[i] == NULL) /* free memory previously allocated */
		{
			while (i >= 0)
			{
				free(x[i]);
				i--;
			}
			free(x);
			return (NULL);
		}
	}
	while (i < height)
	{
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
		i++;
	}
	return (x);
}
