#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: 0 (Success)
 */
int main(void)
{
	long int x;
	long int factor;
	long int largest_factor;

	x = 612852475143;
	factor = 2;
	largest_factor = 0;

	while (x > 1)
	{
		if (x % factor == 0)
		{
			x = x / factor;
		}
		else if (factor > largest_factor)
		{
			largest_factor = factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largest_factor);
	return (0);
}
