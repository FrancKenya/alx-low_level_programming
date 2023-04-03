#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: points to the first string
 * @accept: points to the second string
 * Return: bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	x = 0;

	while (s[x])
	{
	y = 0;
	while (accept[y])
	{
		if (s[x] == accept[y])
		{
			break;
		}
		y++;
	}
	if (accept[y] == '\0')
	{
		return (x);
	}
	x++;
	}
	return (x);
}
