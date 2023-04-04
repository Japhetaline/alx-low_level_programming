#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all element in the list
 * @h: A pointer to listint structure
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
