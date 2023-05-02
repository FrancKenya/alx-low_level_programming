#include "lists.h"
#include <stdio.h>
/**
* _cycle - a function that checks if a listint_t linked list has a cycle
* @head: points to the first node
* Return: 1 if a cycle is detected, 0 otherwise
*/

int _cycle(const listint_t *head)
{
const listint_t *fast, *slow;

slow = head;
fast = head ? head->next : NULL;

while (fast && fast->next)
{
if (fast == slow)
return (1);
slow = slow->next;
fast = fast->next->next;
}
return (0);
}
/**
* print_listint_safe - a function that prints a listint_t linked list
* @head: points to the first node
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *start, *current, *cycle;
size_t i = 0;

if (!head)
return (0);
if (_cycle(head))
{
printf("-> [%p] %d\n", (void *)head, head->n);
return (-1);
}
start = head;
current = head->next;
cycle = NULL;
while (start && current && start != cycle)
{
printf("[%p] %d\n", (void *)start, start->n);
i++;
start = start->next;
if (current == start)
{
cycle = start;
break;
}
current = current->next;
if (current)
current = current->next; }
if (cycle)
{
printf("[%p] %d\n", (void *)cycle, cycle->n);
i++;
start = cycle->next;
while (start != cycle)
{
printf("[%p] %d\n", (void *)start, start->n);
i++;
start = start->next;
}
printf("-> [%p] %d\n", (void *)cycle, cycle->n);
}
return (i);
}
