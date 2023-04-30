#include "lists.h"
#include <stdlib.h>
/**
* free_listint - a function that frees a listint_t list
* @head: points to the first node
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
