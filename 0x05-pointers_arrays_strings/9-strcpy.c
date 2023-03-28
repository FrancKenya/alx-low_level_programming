#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * includes the terminating null byte (\0), to the buffer pointed to by dest
 * @src: location to be copied from
 * @dest: location to be copied to
 * Return: A string
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

