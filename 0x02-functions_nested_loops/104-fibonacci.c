#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Starts with 1 and 2
 * Return: 0 (Success)
 */

int main(void)
{
	int x;
	unsigned long y = 1, z = 2, a;

	printf("%lu, %lu, ", y, z);
	for (x = 3; x <= 98; x++)
	{
		a = y + z;
		printf("%lu", a);
		if (x < 98)
			printf(", ");
		y = z;
		z = a;
	}
	printf("\n");
	return (0);
}
