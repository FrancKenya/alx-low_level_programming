#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */

int main(void)
{
	long int x = 612852475143;
	long int y = 2;

	while (x % 2 == 0)
	{
		x /= 2;
	}
	long int z;

	for (z = 3; z <= sqrt(x); z += 2)
	{
		while (x % z == 0)
		{
			y = z;
			x /= z;
		}
	}
	if (x > 2)
	{
		y = x;
	}
	printf("%ld\n", y);
	return (0);
}
