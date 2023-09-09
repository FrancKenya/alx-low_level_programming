#include "hash_tables.h"

/**
* hash_table_get - A function that retrieves a value associated with a key.
* @ht: the hash time
* @key: being searched
*
* Return: value or Null if fail
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
