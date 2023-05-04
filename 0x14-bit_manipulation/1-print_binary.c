#include "main.h"

/**
* print_binary - a function that prints the binary representation of a number.
* @n: the number to be printed
*
* Return: void
*/
void print_binary(unsigned long int n)
{
unsigned long int m;
int i, j = 0;

if (n == 0)
{
_putchar('0');
return;
}

for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
{
m = 1UL << i;

if ((n & m) == m)
{
_putchar('1');
j = 1;
}
else if (j)
{
_putchar('0');
}
}
}
