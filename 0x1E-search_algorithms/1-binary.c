# include "search_algos.h"
# include <stddef.h>
# include <stdio.h>

/**
 * binary_search - A function that searches a value in an array
 using binary search
 
 * @array: The array being searched
 * @size: Size of the array
 * @value: Value being searched
 * Return: Index of the value if present otherwise return -1 if array is NULL
 * or value not present
 */

int binary_search(int *array, size_t size, int value)
{
	int low, i, high, centre;

	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		centre = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; ++i)
		{
			if (i < high)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d", array[i]);
			}
		}
		printf("\n");

		if (value < array[centre])
		{
			high = centre - 1;
		}
		else if (value > array[centre])
		{
			low = centre + 1;
		}
		else
		{
			return (centre);
		}
	}
	return (-1);
}
