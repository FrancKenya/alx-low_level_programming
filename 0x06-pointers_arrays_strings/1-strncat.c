#include "main.h"

/**
 * *_strncat -  concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: byte used from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	n--;
	while (n > 0 && *src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}
	*ptr = '\0';
	return (dest);
}
