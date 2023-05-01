#include "lists.h"
#include <stdlib.h>
/**
* delete_nodeint_at_index - deletes the node at index of a linked list
* @head: double pointer to the first node
* index: the index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next_node, *previous_node, *delete_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}
	previous_node = *head;
	while (i < index - 1 && previous_node->next != NULL)
	{
		previous_node = previous_node->next;
		i++;
	}
	if (previous_node->next == NULL)
	{
		return (-1);
	}
	delete_node = previous_node->next;
	previous_node->next = delete_node->next;
	free(delete_node);
	return (1);
}
