#include <stdio.h>

/**
 * main -  Fibonacci sequence
 * Return: 0 (success)
 */

int main(void)
{
	int n = 50;
	int fib[n];

	fib[0] = 1;
	fib[1] = 2;
	int i = 2;

	while (i < n)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		i++;
	}
	i = 0;

	while (i < n)
	{
		printf("%d", fib[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
