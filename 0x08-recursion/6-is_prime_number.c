#include "main.h"

/**
 * is_prime_number -  function that returns 1
 * if the input integer is a prime number, otherwise return 0
 * @n: Number
 * Return: 1 if it's a prime number and 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime_number(n, 2));
}
/**
 * real_prime_number - recursively checks if n is a prime number
 * @n: number
 * @x: factor being checked
 * Return: 1 if it's a prime number and 0 otherwise
 */
int real_prime_number(int n, int x)
{
if (x > n / 2)
{
	return (1);
}
else if (n % x == 0)
{
	return (0);
}
else
{
	return (real_prime_number(n, x + 1));
}
}
