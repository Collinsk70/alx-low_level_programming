#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	/* Traverse the linked list and count each node */
	while (h != NULL)
	{
		h = h->next;
		element_count++;
	}

	return (element_count);
}

