#include "lists.h"

/**
 * sum_dlistint - Function that sum all elements in list
 * @head: Pointer to the head of the list
 * Return: Addition of all element in list, 0 if list is NULL
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
