#include <stdio.h>

/**
 * main -  Fibonacci sequence
 * Return: 0 (success)
 */

int main(void)
{
	int i = 3;

	long int first = 1, second = 2;
	long int next = first + second;

	printf("%ld, ", first);
	printf("%ld, ", second);

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%ld\n", next);
		}
		else
		{
		       printf("%ld, ", next);
		}
		first =  second;
		second = next;
		next = first + second;
		i++;
	}
		return (0);
}
