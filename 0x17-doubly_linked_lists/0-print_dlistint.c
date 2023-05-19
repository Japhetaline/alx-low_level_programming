#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function that prints a doubly linked list
 * @h: head of doubly linked list
 * Return: number of queues in list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t queues = 0;
	const dlistint_t *condition;

	condition = h;
	while (condition)
	{
		printf("%d\n", condition->n);
			condition = condition->next;
		queues++;
	}
	return (queues);
}
