#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter on each element of an array
 * @action: a pointer to the function to be used
 * @size: size of the array
 * @array: given in the argument
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
