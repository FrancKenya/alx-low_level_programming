#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase
 * Return : (void)
 */

void print_alphabet(void)
{
	char x;

	x = 97;
	while (x <= 122)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
