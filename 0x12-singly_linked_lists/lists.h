#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct node - a linked list
 * @len: length
 * @str: memory allocated string
 * @next: pointer to next node
 */

typedef struct node
{
	size_t len;
	char *str;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
