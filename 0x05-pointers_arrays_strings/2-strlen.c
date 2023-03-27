#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s:char variable
 * Return: void
 */

int _strlen(char *s)
{
	int x; /* variable for length */

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
