#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a list_t linked list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	/* Traverse the linked list and print each node */
	while (h != NULL)
	{
		/* If the string is NULL, print "[0] (nil)" */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);

		h = h->next;
		node_count++;
	}

	return node_count;
}

