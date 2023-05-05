#include "main.h"

/**
* get_endianness - checks the endianness
* Return: 0 if bigendian, 1 if littleendian
*/
int get_endianness(void)
{
	char *c;
	unsigned int i;

	i = 1;

	c = (char *)&i;
	return ((int)*c);
}
