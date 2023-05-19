#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Function that adds a node to the end of list
 * @head: The double pointer to end
 * @n: The data to be added to the new node
 * Return: pointer to new element, NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_queue = NULL, *condition  = NULL;

	new_queue = malloc(sizeof(dlistint_t));
	if (!new_queue)
	{
		free(new_queue);
		return (NULL);
	}
	new_queue->next = NULL;
	new_queue->prev = NULL;
	new_queue->n = n;

	if (!head || !(*head))
	{
		*head = new_queue;
		return (new_queue);
	}
	else
	{
		condition = *head;
		while (condition->next)
			condition = condition->next;

		new_queue->prev = condition;
		condition->next = new_queue;

		return (new_queue);
	}
	return (NULL);
}
