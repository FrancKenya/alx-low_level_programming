#include "lists.h"

/**
* *get_nodeint_at_index - a function that returns the nth node of a linked list
* @head: first node pointer
* @index:  index of the node
* Return: the nth node or NULL if the node does not exist
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0; /* to iterate through the linked list */
	listint_t *current_node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current_node != NULL && i < index) /* iterate using a while loop */
	{
		current_node = current_node->next; /* point to the next node */
		i++; /* increment */
	}
	if (i == index && current_node != NULL) /* if nth node is found */
	{
		return (current_node); /* return that nth node */
	}
	else
	{
		return (NULL); /* if the nth node is not found */
	}
}
