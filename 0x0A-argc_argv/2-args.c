#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: arguments count
 * @argv: one dimensional array pointing to the strings
 *
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
