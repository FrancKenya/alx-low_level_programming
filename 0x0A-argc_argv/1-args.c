#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: the arguments count
 * @argv: one dimensional array points to strings
 *
 * Return: 0 success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int arguments_count;

	arguments_count = argc - 1;

	printf("%d\n", arguments_count);
	return (0);
}
