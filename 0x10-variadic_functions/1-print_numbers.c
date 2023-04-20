#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: The integers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int i = 0;

	va_start(arg, n);
	while (i < n)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg);
}
