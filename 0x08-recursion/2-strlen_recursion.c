#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: points to the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length;

	length = 0;

	if (*s != '\0')
	{
		length++;
		length = length + _strlen_recursion(s + 1);
	}
	return (length);
}
