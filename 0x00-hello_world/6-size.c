#include <stdio.h>

/**
 * main - A C program that print sizes on computer it is compiled and run on
 * Return:Always 0 (Success)
 */

int main(void)
{
	char c;
	int d;
	long int l;
	long long int o;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(o));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}

