#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/**
 * struct list_s - A singly linked list node structure
 * @str: The string value to be stored in the node
 * @len: The length of the string
 * @next: A pointer to the next node in the list
 *
 * Description: A node structure for singly linked lists.
 */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

/* Function prototype to print all elements of the list */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

