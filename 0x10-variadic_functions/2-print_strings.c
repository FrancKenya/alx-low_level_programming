#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: strings separating other strings
 * @n: number of strings
 * @...: additional number of strings
 *
 * Return:  printed string if string is not NULL and separator string
 * if not NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *s;

	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		s = va_arg(args, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
