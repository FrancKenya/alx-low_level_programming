#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - function that adds a new node at the beginning of a list_t list
 *  @head: double pointer to first element of the list
 *  @str: string added
 *
 *  Return: Address of the new node or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
	}
	new_node->len = len;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
