#include "main.h"

/**
 * *_memcpy - A function that copies memory area
 * @dest: destination
 * @src: source
 * @n: the memory bytes
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x; /* to iterate through memory area */
	unsigned int y; /* to temporary holds the values of src */

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		y = src[x]; /* y holds the values of src */
		dest[x] = y;
	}
	return (dest);
}
