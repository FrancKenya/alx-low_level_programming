#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - a function that frees a listint_t list.
* @head: double pointer
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
