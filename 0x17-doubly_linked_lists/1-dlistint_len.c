#include "lists.h"

/**
 * dlistint_len - A function that gives the length of list
 * @h: The head of the list
 * Return: The number of queues
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t queues = 0;
	const dlistint_t *condition;

	condition = h;
	while (condition)
	{
		condition = condition->next;
		queues++;
	}
	return (queues);
}
