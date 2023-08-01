#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast, *loop_start;
	size_t count = 0;

	if (head == NULL)
		return (0);

	slow = head;
	fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			/* Loop detected */
			loop_start = head;
			while (slow != loop_start)
			{
				slow = slow->next;
				loop_start = loop_start->next;
			}
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			exit(98);
		}

		if (slow != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
		}
	}

	return (count);
}

