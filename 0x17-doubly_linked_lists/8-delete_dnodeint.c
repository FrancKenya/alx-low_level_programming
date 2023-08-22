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
unsigned int c = 0;
dlistint_t *previous, *current = *head;

if (current != NULL)
{
while (current->prev != NULL)
{
current = current->prev;
}
}
while (current != NULL)
{
if (c == index)
{
if (c == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
}
else
{
previous->next = current->next;
if (current != NULL)
{
current->next->prev = previous;
}
}
free(current);
return (1);
}
previous = current;
current = current->next;
c++;
}
return (-1);
}
