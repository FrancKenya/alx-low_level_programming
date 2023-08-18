#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index -  deletes the node at index index of a linked list
* @head: double pointer to head of the list
* @index: Index of the deleted node
*
* Return: I if successful or -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c;
	dlistint_t *current = *head;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL && c < index)
	{
		current = current->next;
		c++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
