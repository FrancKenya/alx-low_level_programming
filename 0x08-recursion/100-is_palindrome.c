#include "main.h"

/**
 * _strlen_recursion - a fuction used to get the length of the string
 * @s: points to the string
 * Return: length of the  string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length = length + _strlen_recursion(s + 1);
		return (length);
	}
	else
	{
		return (length);
	}
}
/**
 * check_palindrome - checks if it is palidrme
 * @x: index to iterate through the string
 * @s: string
 * @length: the full length of the string
 * Return: 1 or 0
 */

int check_palindrome(char *s, int x, int length)
{
	if (s[x] != s[length - 1]) /* check the first and last index */
	{
		return (0);
	}
	else if (x >= length) /* if the string contains 1 character */
	{
		return (1);
	}
	return (check_palindrome(s, x + 1, length - 1));
}

/**
 * is_palindrome -calls other helper functions
 * check if a string is palindrome or not
 * @s: points to the string
 * Return: 1 if yes and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, 0, length));
}
