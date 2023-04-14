#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes in the second string
 *
 * Return: pointer tonewly allocated space in memory
 * which contains s1, followed by the first n bytes of s2
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *sp;

	if (s1 != NULL)

	for (len1 = 0; s1[len1] != '\0'; len1++) /* length of s1 */

	if (s2 != NULL)
	for (len2 = 0; s2[len2] != '\0' && len2 <  n; len2++) /* length of s2 */

	sp = malloc(sizeof(char) * (len1 + len2 + 1));

	if (sp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++) /* length of s1 */
	{
		sp[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		sp[len1 + j] = s2[j];
	}
	sp[len1 + len2] = '\0'; /* null terminate */

	return (sp);
}
