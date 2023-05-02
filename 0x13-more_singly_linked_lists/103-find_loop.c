#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: points to the head of the linked list
*
* Return: address of the node where the loop starts, or NULL if fail
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *i = head, *j = head;

while (j && j->next)
{
i = i->next;
j = j->next->next;
if (i == j)
{
i = head;
while (i != j)
{
i = i->next;
j = j->next;
}
return (i);
}
}
return (NULL);
}
