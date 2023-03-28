#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: name of array
 * @n: the number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
