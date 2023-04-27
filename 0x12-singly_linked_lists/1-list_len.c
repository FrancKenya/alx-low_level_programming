#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: points to the head of list_t
 *
 * Return: number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
