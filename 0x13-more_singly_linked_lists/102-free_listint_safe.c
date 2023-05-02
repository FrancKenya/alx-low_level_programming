#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - Frees a linked list and sets the head to NULL
*
* @h: double pointer to the head of the list.
*
* Return: size of the list freed.
*/
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *current, *next;

	if (!h)
	{
		return (i);
	}
	current = *h;
	while (current)
	{
		next = current->next;
		free (current);
		i++;
		if ((void *)next <= (void *)current)
		{
			*h = NULL;
			return (i);
		}
		current = next;
	}
	*h = NULL;
	return (i);
}
