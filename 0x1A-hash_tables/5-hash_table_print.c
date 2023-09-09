#include "hash_tables.h"

/**
* hash_table_print - A function that prints a hash table
* @ht: hash table
*
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp;
	int count = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			if (count)
			{
				printf(", ");
			}
			printf("'%s': '%s'", tmp->key, tmp->value);
			count = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
