# include "search_algos.h"
# include <stdio.h>

/**
 * linear_search - A C function that uses linear search algorithm to search
 * an array
 * @array: Pointer to the first element
 * @size: Number of elements in that array
 * @value: Value being searched
 *
 * Return: The first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
