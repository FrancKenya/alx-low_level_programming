#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer being printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n >= 10)
	{
		print_number(n / 10);
	}
	else
		_putchar(n % 10 + '0');
}
