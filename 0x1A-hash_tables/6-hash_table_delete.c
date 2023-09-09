#include "hash_tables.h"

/**
* hash_table_delete - A function that deletes a hash table
* @ht: hash table
*
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp, *current_ptr;

	if (ht == NULL)
	{
		return;
	}
	for (idx = 0; idx < ht->size; idx++)
	{
		current_ptr = ht->array[idx];
		while (current_ptr != NULL)
		{
			tmp = current_ptr->next;
			free(current_ptr->value);
			free(current_ptr->key);
			free(current_ptr);
			current_ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
