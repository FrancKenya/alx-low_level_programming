#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name -  a function that prints a name
 * @name: points to the string to be printed
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
