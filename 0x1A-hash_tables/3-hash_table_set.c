#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - A function that adds a key-value
 * pair to the hash table.
 * @ht: A pointer to the hash table where the pair will be added.
 * @key: The key to be added to the hash table.
 * @value: The value associated with the key to be added.
 * Return: 1 if the addition is successful, or 0 if it fails.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int token = 0;
	char *worth_cp = NULL, *pointer_cp = NULL;
	hash_node_t *new_element = NULL, *tmp_element = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	worth_cp = strdup(value);
	pointer_cp = strdup(key);
	new_element = malloc(sizeof(hash_node_t));
	if (!new_element)
		return (0);
	new_element->key = pointer_cp;
	new_element->value = worth_cp;
	new_element->next = NULL;
	token = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[token] != NULL)
	{
		tmp_element = (ht->array)[token];
		while (tmp_element)
		{
			if (strcmp(tmp_element->key, pointer_cp) == 0)
			{
				free(ht->array[token]->value);
				ht->array[token]->value = worth_cp;
				free(pointer_cp);
				free(new_element);
				return (1);
			}
			tmp_element = tmp_element->next;
		}
		tmp_element = (ht->array)[token];
		new_element->next = tmp_element;
		(ht->array)[token] = new_element;
	}
	else
		(ht->array)[token] = new_element;
	return (1);
}
