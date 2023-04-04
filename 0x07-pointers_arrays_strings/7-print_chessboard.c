#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: two dimensional array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
			if (y == 8)
			{
				_putchar('\n');
			}
		}
		x++;
	}
}
