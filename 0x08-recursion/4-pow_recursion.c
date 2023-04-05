#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The value being raised
 * @y: The value power raising x
 * Return: X raised to the power of y or -1 if negative and 1 if 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

