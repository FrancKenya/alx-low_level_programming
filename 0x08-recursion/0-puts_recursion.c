#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: points to the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x])
	{
		_putchar(s[x]);
		_puts_recursion(s + 1);
		x++;
	}
	else if (s[x] == '\0')
	{
		_putchar('\n');
	}
}
