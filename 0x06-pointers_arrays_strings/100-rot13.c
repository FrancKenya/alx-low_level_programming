#include "main.h"
#include <stdio.h>

/**
 * *rot13 -  a function that encodes a string using rot13
 * @x: a pointer to a string
 *
 * Return: *x
 */

char *rot13(char *x)
{
	int i, j;

	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (x[i] == data1[i])
			{
				x[i] = datarot[i];
				break;
			}
		}
	}
	return (x);
}
