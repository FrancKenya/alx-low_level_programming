#include "main.h"

/**
 * *_strchr -  a function that locates a character in a string
 * @s: points to the string s
 * @c: character to be located
 * Return: c or NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (NULL);
}
