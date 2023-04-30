#include "lists.h"
#include <stdlib.h>
/**
* *add_nodeint - adds a new node at the beginning of a listed list
* @head: double pointer to the first node
* @n: integer to be stored in the new_node
* Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node); /* free memory previously assigned */
		return (NULL);
	}
	new_node->n = n; /* assign the integer to the new_node */
	new_node->next = *head; /* update next pointer to the current head */
	*head = new_node; /* head pointer points to the new_node */
	return (new_node); /* address of new_node returned */
}
