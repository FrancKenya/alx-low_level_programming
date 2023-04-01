#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string
 * @x: The string being checked and changed
 * Return: A changed string
 */

char *cap_string(char *x)
{
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		if ((i == 0 || x[i - 1] == ' ' || x[i - 1] == '\t' || x[i - 1] == '\n'
					|| x[i - 1] == ',' || x[i - 1] == ';' || x[i - 1] == '.' ||
					x[i - 1] == '!' || x[i - 1] == '?' || x[i - 1] == '"' ||
					x[i - 1] == '(' || x[i - 1] == ')' || x[i - 1] == '{' ||
					x[i - 1] == '}') && (x[i] >= 'a' && x[i] <= 'z'))
		{
			x[i] = x[i] - 32;
		}
	}
	return (x);
}
