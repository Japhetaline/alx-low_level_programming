#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of an element in a linked lists
 * @h: pointer to the list_t
 * Return: number of element in h
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
