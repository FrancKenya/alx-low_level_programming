#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: points to the element of the array
 * @size: size of rows and columns
 * Return (void)
 */

void print_diagsums(int *a, int size)
{
	int x, sumofd1, sumofd2;

	x = 0;
	sumofd1 = 0;
	sumofd2 = 0;

	while (x < size)
	{
		sumofd1 = sumofd1 + *(a + x * size + x);
		sumofd2 = sumofd2 + *(a + x * size + (size - x - 1));
		x++;
	}
	printf("%d\n", sumofd1);
	printf("%d\n", sumofd2);
}
