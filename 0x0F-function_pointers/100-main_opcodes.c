#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num_bytes;

	char *main_code;
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	main_code = (char *)main;
	while (i < num_bytes)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_code[i]);
			break;
		}
		printf("%02hhx", main_code[i]);
		i++;
	}
	return (0);
}
