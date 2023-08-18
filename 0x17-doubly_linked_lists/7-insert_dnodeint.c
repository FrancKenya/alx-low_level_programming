#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Puts a new node at a given position.
* @h: A double pointer to the head.
* @idx: Index where the new node should be inserted.
* @n: Value to be stored.
*
* Return: Address of the new node, or NULL if failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *current = *h;
unsigned int c = 0;
if (h == NULL)
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
new->next = NULL;
if (idx == 0)
{
if (*h != NULL)
{
new->next = *h;
(*h)->prev = new;
}
*h = new;
return (new);
}
while (current != NULL && c < idx - 1)
{
current = current->next;
c++;
}
if (current == NULL)
{
free(new);
return (NULL);
}
new->next = current->next;
new->prev = current;
if (current->next != NULL)
current->next->prev = new;
current->next = new;
return (new);
}
