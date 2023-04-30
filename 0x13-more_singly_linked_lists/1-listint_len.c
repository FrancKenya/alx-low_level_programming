#include "lists.h"

/**
* listint_len - a function that returns the number of elements in a linked list
* @h: points to the head of the node
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t len; /* len of the current node */

	len = 0;

	while (h != NULL)
	{
		len++; /* increment len */
		h = h->next; /* move pointer to the next node */
	}
	return (len);
}
