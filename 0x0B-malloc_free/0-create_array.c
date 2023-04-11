#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  creates an array of chars.
 * Initializes it with a specific char
 * @size: Bytes of the array
 * @c: character assigned to the string
 *
 * Return: ointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
