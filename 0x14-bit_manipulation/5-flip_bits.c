#include "main.h"

/**
* flip_bits - returns the number of bits needed to flip
* @n: first number
* @m: second number
* Return: integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int i = 0;

	while (XOR > 0)
	{
		if (XOR & 1)
		i++;
		XOR >>= 1;
	}
	return (i);
}
