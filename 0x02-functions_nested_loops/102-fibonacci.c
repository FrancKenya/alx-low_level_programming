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

	printf("%lu,", first);
	printf("%lu,", second);

	while (i <= 50)
	{
		if (i == 50)
		{
			printf("%lu \n", next);
		}
		else
		{
		       printf("%lu, ", next);
		}
		first =  second;
		second = next;
		next = first + second;
		i++;
	}
		return (0);
}
