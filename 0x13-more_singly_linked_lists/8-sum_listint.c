#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @head: point to the first node
* Return: sum of all data
*/

int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}
