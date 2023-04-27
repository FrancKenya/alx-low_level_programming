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
	unsigned int len;
	char *str;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);

#endif
