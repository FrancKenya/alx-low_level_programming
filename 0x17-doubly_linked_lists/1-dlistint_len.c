#include <stdio.h>
#include "lists.h"

/**
* dlistint_len - fucntion returning the number of elements in a linked list.
* @h: pointer to the head
*
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
