#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 (success)
 */

int main(void)
{
	int y = 0;

	for (int x = 1; x < 1024; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			y = y + x;
		}
	}
	printf("%d\n", y);
	return (0);
}
