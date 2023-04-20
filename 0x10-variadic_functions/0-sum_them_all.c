#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its paramters
 * @n: number of paramters
 * @...: argv.
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;

	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arg, n);
	while (i < n)
	{
		sum += va_arg(arg, int);
		i++;
	}
	va_end(arg);
	return (sum);
}
