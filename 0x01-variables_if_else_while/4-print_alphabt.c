#include <stdio.h>

/**
 * main - prints alphabet in lowercase minus 'e,q'
 * Return: 0 (success)
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
