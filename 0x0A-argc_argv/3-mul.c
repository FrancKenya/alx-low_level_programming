#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: one dimensional array pointers to the string
 *
 * Return: -1 for error and 1 if successful
 */

int main(int argc, char **argv)
{
	int num1, num2, results;

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	num1 = _atoi(argv[1]); /* convert argument 2 in to an integer */
	num2  = _atoi(argv[2]); /* convert argument 3 in to an integer */
	results = num1 * num2;

	printf("%d\n", results);
	return (0);
}

/**
 * _atoi - convert string to integer
 * @s: string
 * Return: intger
 */

int _atoi(char *s)
{
	int current_position, b, n, len, flag, f;

	current_position = 0;
	b = 0;
	n = 0;
	len = 0;
	flag = 0;
	f = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (current_position < len && (current_position < flag) == 0)
	{
		if (s[current_position] == '-')
		{
			++b;
		}
		if (s[current_position] >= '0' && s[current_position] <= '9')
		{
			f = s[current_position] - '0';
			if (b % 2)
			{
				f = -f;
			}
			n = n * 10 + f;
			flag = 1;
			if (s[current_position + 1] < '0' || s[current_position + 1] > '9')
			{
				break;
			}
			flag = 0;
		}
		current_position++;
	}
	if (flag == 0)
		return (0);
	return (n);
}
