#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: points to the memory location to be filled
 * @b: used to fill the memory location
 * @n: number of bytes in the pointed memory location
 * Return: s (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x; /* To iterate throught hte pointed location */

	for (x = 0; x < n; x++)
	{
		s[x] = b; /* fills the memory location with b */
	}
	return (s);
}
