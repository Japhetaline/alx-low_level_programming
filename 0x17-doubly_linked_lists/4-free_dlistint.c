#include "lists.h"

/**
 * free_dlistint - Function that frees a doubly link list
 * @head: Pointer to head of doubly linked list to be freed
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *condition;

	while (head)
	{
		condition = head->next;
		free(head);
		head = condition;
	}
}

