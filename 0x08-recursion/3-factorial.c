#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: Number being factored
 * Return: factorial of the number (n) or -1 if n is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
