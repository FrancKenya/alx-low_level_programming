#include "main.h"

/**
 * *_strpbrk -  a function that searches a string for any of a set of bytes
 * @s: string being searched
 * @accept: string with the characters being searched for in s
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
