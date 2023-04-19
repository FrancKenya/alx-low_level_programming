#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @size: the number of elements in the array
 * @array: being searched
 * @cmp: point to one function
 *
 * Return: int (success) -1 if if no matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
