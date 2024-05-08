# include <stdio.h>
# include "search_algos.h"
# include <math.h>

/**
 * jump_search - Searches for a value in an array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value being searched
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while ((value > array[step]) && (step <= size - 1))
	{
		printf("Value checked array[%li] = [%i]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
	}
	printf("Value found between indexes [%li] and [%li]\n", prev, step);
	for (; prev <= step && prev < size; prev++)
	{
		printf("Value checked array[%li] = [%i]\n",
		       prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
