#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> /* For size_t */

/* Define the listint_t structure */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* Function prototype to print all elements of the list */
size_t print_listint(const listint_t *h);

#endif /* LISTS_H */

