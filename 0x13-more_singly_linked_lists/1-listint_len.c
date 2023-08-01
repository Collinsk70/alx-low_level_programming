#include <stddef.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	/* Traverse the linked list and count each node */
	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}

	return (node_count);
}

