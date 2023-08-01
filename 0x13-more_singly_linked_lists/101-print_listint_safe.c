#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - Finds a loop in a linked list.
 *
 * @head: A pointer to the head of the linked list.
 *
 * Return: Address of the node where the loop starts/returns.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
		return (NULL);

	for (fast = head->next; fast != NULL; fast = fast->next)
	{
		if (fast == fast->next)
			return (fast);
		for (slow = head; slow != fast; slow = slow->next)
			if (slow == fast->next)
				return (fast->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - Prints a linked list, even if it has a loop.
 *
 * @head: The head of the linked list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int has_loop;
	listint_t *loop_node;

	loop_node = find_listint_loop((listint_t *) head);

	for (len = 0, has_loop = 1; (head != loop_node || has_loop) && head != NULL; 
			len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == loop_node)
			has_loop = 0;
		head = head->next;
	}

	if (loop_node != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}

