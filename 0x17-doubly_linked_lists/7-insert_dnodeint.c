#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function that insert queue at a position
 * in a list
 * @h: Double pointer to the head
 * @idx: index to insert new queue
 * @n: Data to add to new queue
 * Return: Pointer to new element, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_queue = NULL, *condition = NULL;
	unsigned int k = 0;

	new_queue = malloc(sizeof(dlistint_t));
	if (!new_queue)
		return (NULL);
	new_queue->next = NULL;
	new_queue->prev = NULL;
	new_queue->n = n;
	if (!h || !(*h))
		*h = new_queue;
	else
	{
		condition = *h;
		while (idx != k++ && condition->next)
			condition = condition->next;
		if (condition->next)
			new_queue->prev = condition->prev;
		else
			new_queue->prev = condition;
		if (idx == k)
			condition->next = new_queue, new_queue->prev = condition;
		else if (idx == k - 1)
		{
			if (condition->prev)
				condition->prev->next = new_queue;
			else
				*h = new_queue;
			condition->prev = new_queue;
			new_queue->next = condition;
		}
		else
		{
			free(new_queue);
			return (NULL);
		}
	}
	return (new_queue);
}
