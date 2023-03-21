#include "main.h"

/**
 * _islower - checks if a char is lowercase
 *
 * @c: The character being checked
 * Return: 1 if c is lowercase, otherwise returns 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
