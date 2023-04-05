#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: The number
 * Return: Natural square root or -1 if n does not have square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (real_sqrt_recursion(n, 1));
	}
/**
 * real_sqrt_recursion - helps in reculsively calculating of a sq of a number
 * @x: Value being checked
 * @n: The number
 * Return: Recursively return the sq of n
 */
int real_sqrt_recursion(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (real_sqrt_recursion(n, x + 1));
	}
}
