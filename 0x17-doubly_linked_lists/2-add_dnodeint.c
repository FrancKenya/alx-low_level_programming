#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - dds a new node at the beginning of a list.
* @head: double pointer to the head
* @n: Value to be stored
*
* Return: The address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
