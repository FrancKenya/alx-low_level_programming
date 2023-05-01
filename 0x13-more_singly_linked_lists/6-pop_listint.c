#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: double pointer to the first node
* Return: the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *j; /* to temporarily be assigned the value of head node */
	unsigned int n;

	if (*head == NULL)
	{
		return (0);
	}
	j = *head; /* assign the value of head node to j */
	*head = (*head)->next; /* point to the next node */
	n = j->n; /* assign the value of head node to n variable being returned */
	free(j); /* free the head node value */
	return (n);
}
