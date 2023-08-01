#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list, even if it has a loop.
 *
 * @h: Double pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			/* Handle case of loop */
			*h = NULL;
			break;
		}
	}

	return (size);
}

