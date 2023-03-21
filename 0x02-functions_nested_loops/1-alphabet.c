#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase
 * Return : (void)
 */

void print_alphabet(void)
{
	char lowercase;

	lowercase = 97;
	while (lowercase <= 122)
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
