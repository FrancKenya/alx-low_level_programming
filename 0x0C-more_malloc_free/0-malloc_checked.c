#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: memory size to be allocated
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *x; /* declared pointer */

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
