#include "lists.h"

/**
 * get_dnodeint_at_index -- function that gets a queue at index
 * @head: The pointer to the head of list to look through
 * @index: The index of queue to find
 * Return: A pointer to queue if found, or NULL in otherwise
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;

	while (head)
	{
		if (k++ == index)
			break;
		head = head->next;
	}
	return (head);
}
