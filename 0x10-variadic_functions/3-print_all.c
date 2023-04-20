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
	char *str, c;
	int d, i;
	float f;

	va_start(args, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				d = va_arg(args, int);
				printf("%d", d);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
