#include "main.h"

/**
 * puts_half - prints half of a string
 * n = (length_of_the_string - 1) / 2
 * @str: string or input
 * Return: void
 */

void puts_half(char *str)
{
	int x, n, y;

	y = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		y++;
	}
	n = (y / 2);
	if ((y % 2) == 1)
	{
		n = ((y + 1) / 2);
	}
	for (x = n; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
