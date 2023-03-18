#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = 0; x < 8; x++)
		for (y = x + 1; y < 9; y++)
			for (z = y + 1; z < 10; z++)
			{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
				if (x < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
