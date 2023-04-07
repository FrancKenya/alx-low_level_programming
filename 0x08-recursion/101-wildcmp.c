#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @s1: points to the first string
 * @s2: points to the second string
 * Return: 1 if identical 0r 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
