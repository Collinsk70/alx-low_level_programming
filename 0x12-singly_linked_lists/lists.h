#ifndef LIST_H
#define LIST_H

#include <stddef.h> /* For size_t */

/* Define the list_t structure */
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h);

#endif /* LIST_H */

