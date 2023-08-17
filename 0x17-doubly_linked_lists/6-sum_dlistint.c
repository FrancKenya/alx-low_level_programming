#include "lists.h"

/**
* sum_dlistint - Returns the sum of all the data (n) of a linked list.
* @head: points to the head of the list
*
* Return: sum or 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
