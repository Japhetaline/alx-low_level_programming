#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - A function that adds a node to the end of the list
 * @head: The double pointer to the head
 * @n: The data to add into new node
 * Return: A pointer to new element, or NULL on failure
 */
dlistint_t *add_dnodeint(dlist_t **head, const int n)
{
	dlistint_t *new_queue = NULL, *condition = NULL;

	new_queue = malloc(sizeof(dlistint_t));
	if (!new_queue)
	{
		free(new_queue);
		return (NULL)
	}

	new_queue->next = NULL;
	new_queue->prev = NULL;
	new_queue->n = n;

	if (!head || !(*head))
	{
		*head = new_queue;
		return (new_node);
	}
	else
	{
		condition = *head;
		condition->prev = new_queue;
		*head = new_queue;
		new_queue->next = condition;
		return (new_queue);
	}
	return (NULL);
}
