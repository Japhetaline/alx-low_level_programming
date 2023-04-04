#include "lists.h"
#include <string.h>

/**
 * add_nodeint - A function that add new nod at the begining of a list
 * @head: A pointer to list_t structure
 * @n: AN integar data to put into new node
 * Return: hte address of the new element, or NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
