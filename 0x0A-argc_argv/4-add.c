#include <stdio.h>

/**
 * main -  a program that adds positive numbers.
 * @argc: argument counts
 * @argv: one dimensional array pointers to the strings argument
 *
 * Return: 0 (success) or 1 (error)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		char *arg = argv[i];
		int num = 0;
		int j = 0;

		while (arg[j] != '\0')
		{
			if (arg[j] >= 48 && arg[j] <= 57)
			{
				num = num * 10 + (arg[j] - '0');
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		if (num <= 0)
		{
			continue;
		}
		sum = sum + num;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
