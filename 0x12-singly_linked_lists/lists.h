#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/* Define the list_t structure */
typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;

/* Function prototype to print all elements of the list */
size_t print_list(const list_t *h);

/* Function prototype to count the number of elements in the list */
size_t list_len(const list_t *h);

/* Function prototype to add a new node at the beginning of the list */
list_t *add_node(list_t **head, const char *str);

/* Function prototype to add a new node at the end of the list */
list_t *add_node_end(list_t **head, const char *str);

#endif /* LISTS_H */

