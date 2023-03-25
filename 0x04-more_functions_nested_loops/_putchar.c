#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to the standard output
 * @c: The character to print
 * Return: 1 (Success)' else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
