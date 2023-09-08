#include "hash_tables.h"

/**
* key_index - A function that gives you the index of a key
* @key: key being found
* @size: size of the array
*
* Return: Index at which the key/value pair should be stored
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h_value, idx;

	if (key == NULL)
	{
		return (0);
	}
	h_value = hash_djb2(key);
	idx = h_value % size;
	return (idx);
}
