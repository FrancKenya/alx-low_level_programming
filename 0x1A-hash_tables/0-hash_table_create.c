#include "hash_tables.h"

/**
* hash_table_create - a function that creates a hash table
* @size: The size of the array
*
* Return: A pointer to the created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	/* handle malloc failure */

	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size; /* set size of the table to provided size */
	hash_table->array = calloc(size, sizeof(hash_node_t *));

	/* handle calloc failure */

	if (hash_table->array == NULL)
	{
		return (NULL);
	}
	/* initialize the new hash table */
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
