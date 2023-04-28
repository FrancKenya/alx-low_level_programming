#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node_end -  a function that adds a new node at the end of a listed list
 * @head: double pointer to to the first element
 * @str: string being added
 *
 * Return: Address (new element) or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *j;
	unsigned int len;
	char *new_str;

	if (str == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_code);
		return (NULL);
	}
	new_node->str = new_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	j = *head;
	while (j->next != NULL)
	{
		j = j->next;
	}
	j->next = new_node;
	return (new_node);
}
