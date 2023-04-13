#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: elements in the array
 * @size: bytes
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	unsigned int j = nmemb * size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(j);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
