#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: lowest value stored
 * @max: highest value stored
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	int j = max - min;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (j + 1));
	
	if (array == NULL)
	{
		return (NULL);
	}
	while (i <= j)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
