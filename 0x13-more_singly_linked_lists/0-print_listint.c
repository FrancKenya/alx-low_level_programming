#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: points at the head of the starting node
* Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i; /* tracks number of nodes */

	i = 0; /* initialized */

	while (h)
	{
		printf("%d\n", h->n); /* print value of  n number of nodes */
		i++;
		h = h->next; /* move pointer to the next node */
	}
	return (i); /* number of nodes tracked */
}
