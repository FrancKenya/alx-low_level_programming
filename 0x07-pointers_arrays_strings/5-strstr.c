#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: string being checked
 * @needle: substring with the first occurence being checked in haystack
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n;

	while (*h != '\0')
	{
	n = needle;
	while (*n != '\0' && *h == *n)
	{
		h++;
		n++;
	}
	if (*n == '\0')
	{
		return (h);
	}
	h++;
	}
	return (0);
}
