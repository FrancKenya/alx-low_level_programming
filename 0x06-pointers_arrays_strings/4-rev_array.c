#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: the number of elements of the array
 * @a: array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar (',');
		_putchar (a[i] + '0');
		i++;
	}
	i = n - 1;
	while (i <= 0)
	{
		_putchar (',');
		_putchar (a[i] + '0');
		i++;
	}
}
