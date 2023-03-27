#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: The string
 * Return: void
 */

void print_rev(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
