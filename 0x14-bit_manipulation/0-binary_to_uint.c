#include "main.h"
#include <stddef.h>
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: points to the string with the binary number
* Return: integer (the converted binaty number)
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num <<= 1;
			num += b[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (num);
}
