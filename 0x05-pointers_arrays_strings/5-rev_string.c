#include "main.h"
/**
 * rev_string - reverses a string
 * @s: character
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int y = 0;
	int x;

	while (s[y] != '\0')
		y++;
	for (x = 0; x < y; x++)
	{
		y--;
		rev = s[x];
		s[x] = s[y];
		s[y] = rev;
	}
}
