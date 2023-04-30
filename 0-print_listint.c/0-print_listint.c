#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: points at the head of the first node
* Return: Number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i; /* the number of nodes */

	i = 0;

	while (h)
	{
		printf("%d\n", h->n); /* print value of  n number of nodes */
		h = h->next; /* move pointer to next node */
		i++; /* increase count */
	}
	return (i); /* number of nodes tracked */
}
