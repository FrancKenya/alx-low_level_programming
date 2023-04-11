#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  function that returns a pointer
 * to a newly allocated space in memory
 * contains a copy of the string given as a parameter
 * @str: original string
 *
 * Return: Apointer to s or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *s;

	int len;
	int i = 0;
	
	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++);
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
