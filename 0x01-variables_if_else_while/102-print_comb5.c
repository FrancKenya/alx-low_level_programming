#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
		for (y = x; y < 100; y++)
			if (x != y)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				putchar(' ');
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');
				if (x != 99 || y != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
