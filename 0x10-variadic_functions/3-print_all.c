#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 * @...: more arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	float f;

	char *str, c, *separator = " ";
	int d, i = 0;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%s%c", separator, c);
				break;
			case 'i':
				d = va_arg(args, int);
				printf("%s%d", separator, d);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%s%f", separator, f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				else
					printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
