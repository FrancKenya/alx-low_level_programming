#include "main.h"

/**
 * *_strcat -  function appends the src string to the dest string
 * a ppends the src string to the dest strin
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *x = dest;

	while (*x != '\0')
	{
		x++;
	}
	while (*src != '\0')
	{
		*x = *src;
		x++;
		src++;
	}
	*x = '\0';
	return (dest);
}

