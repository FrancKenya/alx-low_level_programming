#include "main.h"

/**
 * _strcmp -  a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Integer
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	if (s1[x] == '\0' && s2[x] == '\0')
	{
		return (0); /* equal */
	}
	else if (s1[x] == '\0')
	{
		return (-1); /* s1 longer than s2 */
	}
	else
	{
		return (1); /* s2 longer than s1 */
	}
}
