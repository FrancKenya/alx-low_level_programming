#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a linked list.
* @head: points to the head of the list
* @index: index of the node to be retrieved
*
* Return: nth node or NULL if it does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int c = 0;

	while (current != NULL)
	{
		if (c == index)
		{
			return (current);
		}
		current = current->next;
		c++;
	}
	return (NULL);
}
