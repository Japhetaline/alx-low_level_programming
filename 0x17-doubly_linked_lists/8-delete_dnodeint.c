#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - function that inserts a queue at position
 * @h: the double pointer to the head
 * @index: the index to insert new queue
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *condition = NULL;
	unsigned int k = 0;

	if (!h || !(*h))
	{
		return (-1);
	}
	else
	{
		condition = *h;
		while (index != k++ && condition)
			condition = condition->next;
		if (!condition)
			return (-1);
		if (condition->next)
			condition->next->prev = condition->prev;
		if (index == 0)
			*h = condition->next;
		else
			condition->prev->next = condition->next;
		free(condition);
		return (1);
	}
	return (-1);
}
