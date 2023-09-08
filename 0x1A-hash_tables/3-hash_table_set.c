#include "hash_tables.h"

/**
* hash_table_set - A function that adds an element to the hash table.
* @key: key iof the string
* @ht: hash table
* @value: value associated with the key
*
* Return: 1 for success or 0 for fail
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *tmp;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			{
				return (0);
			}
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next; }
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0); }
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL)
	{
		free(new->key);
		free(new);
		return (0); }
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
