#include "main.h"

void print_alphabet(void);

/**
 * main -  prints the alphabet, in lowercase
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char x;

	x = 97;
	while (x <= 122)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
