#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: First number being swapped
 * @b: Second number being swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
