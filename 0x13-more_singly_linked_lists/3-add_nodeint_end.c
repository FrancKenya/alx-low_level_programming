#include "lists.h"
#include <stdlib.h>
/**
* *add_nodeint_end - adds a new node at the end of a linked list
* @head: double pointer pointing to the first node
* @n: A constant integer to be assigned to the new_node
* Return:  the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *j, *new_node;

new_node = malloc(sizeof(listint_t));
/* allocate memory for new_node */
if (new_node == NULL)
/* check if allocation was successful */
{
return (NULL);
}
new_node->n = n; /* assign value n to new_node */
new_node->next = NULL;
/* since it is the last node, set it to NULL */
if (*head == NULL)
/* check if the pointer points to an empty list */
{
*head = new_node;
/* if yes it is assigned the new_node */
return (new_node);
/* return the address of the new_node */
}
j = *head;
/* sets j to the beginning of the list */
while (j->next != NULL)
/* check if  j is at the last node */
{
j = j->next;
/* move j till it reaches the last node */
}
j->next = new_node;
/* assign new_node to the end of the list */
return (new_node);
}
