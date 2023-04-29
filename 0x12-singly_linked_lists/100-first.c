#include <stdio.h>

void __attribute__ ((constructor)) print_string(void);

/**
* print_string - prints two strings before main
* Return: void
*/
void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
