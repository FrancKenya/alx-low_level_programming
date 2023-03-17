#include <stdio.h>

/**
 * main - prints a program in lowercase and then uppercase
 * Return: 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
		putchar(x);
	for (x = 'A'; x <= 'Z'; ++x)
		putchar(x);
	putchar('\n');
	return (0);
}
