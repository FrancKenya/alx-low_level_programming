#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to o a newly allocated space
 * in memory which contains the contents of s1
 * followed by the contents of s2, and null terminated
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++) /* length of s1 */
	for (j = 0; s2[j] != '\0'; j++) /* length of s2 */
	{
	}
	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
