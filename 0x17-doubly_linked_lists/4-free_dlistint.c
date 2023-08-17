#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - a function that frees a list
* @head: points to the head of the list
*
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
