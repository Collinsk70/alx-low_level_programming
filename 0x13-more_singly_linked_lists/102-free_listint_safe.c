#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Detects if there is a loop in a linked list.
 *
 * @head: Pointer to the head of the linked list.
 *
 * Return: Address of thop starts/returns, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (current = head; current != end; current = current->next)
			if (current == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - Frees a listint list, even if it contains a loop.
 *
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes that were freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *nxt, *loop_node;
	size_t node_count;
	int has_loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loop_node = find_listint_loop(*h);
	for (node_count = 0; (*h != loop_node || has_loop) && *h != NULL; *h = nxt)
	{
		node_count++;
		nxt = (*h)->next;
		if (*h == loop_node && has_loop)
		{
			if (loop_node == loop_node->next)
			{
				free(*h);
				break;
			}
			node_count++;
			nxt = nxt->next;
			free((*h)->next);
			has_loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (node_count);
}

