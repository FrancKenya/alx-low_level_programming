#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * free ptr
 * Return: new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	s = malloc(new_size); /* allocate memory */
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		s[i] = ((char *) ptr)[i]; /* move the old_size to s */
	}
	while (i < new_size)
	{
		s[i] = 0; /* don't initialize */
		i++;
	}
	free(ptr);
	return (s);
}
