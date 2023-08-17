#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end -  adds a new node at the end of list
* @head: double pointer to head of the list
* @n: value stored in the new node
*
* Return: Address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i, *new;

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
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	i = *head;
	while (i->next != NULL)
	{
		i = i->next;
	}
	i->next = new;
	new->prev = i;
	return (new);
}
