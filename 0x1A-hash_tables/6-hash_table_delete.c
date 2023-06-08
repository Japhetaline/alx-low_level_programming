#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - A function that deallocates
 * memory for a hash table.
 * @ht: A pointer to the hash table to be freed.
 * Return: None.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int k;
	hash_node_t *next_fork = NULL, *fork = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (k = 0; k < ht->size; k++)
		{
			if (ht->array[k])
			{
				fork = ht->array[k];
				while (fork)
				{
					next_fork = fork->next;
					if (fork->value)
						free(fork->value);
					if (fork->key)
						free(fork->key);
					free(fork);
					fork = next_fork;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
